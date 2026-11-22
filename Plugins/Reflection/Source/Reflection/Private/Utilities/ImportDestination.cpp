/* Copyright Reflection Contributors 2024-2026 */

#include "Utilities/ImportDestination.h"
#include "Importers/Constructor/ImportJob.h"
#include "Settings/SettingsAccess.h"
#include "Utilities/ContentBrowser.h"
#include "Misc/PackageName.h"
#include "Interfaces/IMainFrameModule.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/SBoxPanel.h"

FString FImportDestination::ActiveRoot;
TMap<FString, FString> FImportDestination::MappedPaths;
int32 FImportDestination::ScopeDepth = 0;

FImportDestination::FScope::FScope(const FString& Root) : Previous(ActiveRoot) {
	ActiveRoot = Root;
	++ScopeDepth;
}

FImportDestination::FScope::~FScope() {
	ActiveRoot = Previous;
	--ScopeDepth;
}

FString FImportDestination::Remap(const FString& Path) {
	if (ActiveRoot.IsEmpty() || !Path.StartsWith(TEXT("/"))
		|| Path.StartsWith(TEXT("/Script/")) || Path.StartsWith(TEXT("/Engine/"))
		|| Path.StartsWith(TEXT("/Temp/")) || Path.StartsWith(TEXT("/Transient"))
		|| Source(Path) != Path) return Path;

	// Game and plugin mount folders can be kept independently under a custom destination.
	const UReflectionSettings* Settings = GetSettings();
	const bool bKeepMountFolder = Path.StartsWith(TEXT("/Game/")) ? Settings->KeepGameFolder : Settings->KeepPluginFolder;
	const int32 MountEnd = bKeepMountFolder ? INDEX_NONE : Path.Find(TEXT("/"), ESearchCase::CaseSensitive, ESearchDir::FromStart, 1);
	const FString Destination = ActiveRoot + (MountEnd == INDEX_NONE ? Path : Path.Mid(MountEnd));
	MappedPaths.Add(Destination, Path);
	return Destination;
}

FString FImportDestination::Source(const FString& Path) {
	if (ActiveRoot.IsEmpty() || !Path.StartsWith(ActiveRoot + TEXT("/"))) return Path;
	// Match a mapped package or folder, never an arbitrary source path that happens
	// to sit under the destination. The suffix includes object names and subobjects.
	const FString* Original = nullptr;
	int32 Matched = 0;
	for (const auto& Pair : MappedPaths) {
		if (Pair.Key.Len() <= Matched || !Path.StartsWith(Pair.Key)) continue;
		const int32 Length = Pair.Key.Len();
		if (Path.Len() != Length && !Pair.Key.EndsWith(TEXT("/"))
			&& Path[Length] != TEXT('/') && Path[Length] != TEXT('.') && Path[Length] != TEXT(':')) continue;
		Original = &Pair.Value;
		Matched = Length;
	}
	return Original ? *Original + Path.RightChop(Matched) : Path;
}

/* Validate against Unreal's mounted content roots, including plugin Content.
 * Appending a package name also makes a mount root itself a valid destination. */
static bool IsValidReflectionDestination(const FString& Path) {
	return Path != TEXT("/Engine") && !Path.StartsWith(TEXT("/Engine/"))
		&& FPackageName::IsValidLongPackageName(Path + TEXT("/DestinationCheck"), false);
}

bool FImportDestination::Choose(FString& OutRoot) {
	OutRoot.Empty();
	// A running job owns its destination until every queued file finishes.
	if (FImportJob::IsRunning() || ScopeDepth > 0) {
		SpawnPrompt(TEXT("Reflection"), TEXT("Wait for the current reflection import to finish before starting another."));
		return false;
	}
	MappedPaths.Empty();
	if (GetSettings()->KeepOriginalAssetPaths) return true;

	FString Selected = GetSelectedContentBrowserFolder();
	if (!IsValidReflectionDestination(Selected)) Selected = TEXT("/Game/Reflected");
	bool Accepted = false;
	TSharedPtr<SEditableTextBox> PathBox;
	const TSharedRef<SWindow> Window = SNew(SWindow)
		.Title(FText::FromString(TEXT("Reflect Destination")))
		.ClientSize(FVector2D(600, 460)).SupportsMinimize(false).SupportsMaximize(false);

	FPathPickerConfig Config;
	Config.DefaultPath = Selected;
	Config.bAllowClassesFolder = false;
	Config.bAllowContextMenu = true;
	Config.OnPathSelected = FOnPathSelected::CreateLambda([&Selected, &PathBox](const FString& Path) {
		Selected = Path;
		if (PathBox.IsValid()) PathBox->SetText(FText::FromString(Path));
	});
	const FContentBrowserModule& Browser = FModuleManager::LoadModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));
	Window->SetContent(SNew(SBorder).Padding(12)
		[SNew(SVerticalBox)
		+ SVerticalBox::Slot().AutoHeight().Padding(0, 0, 0, 8)
		[SNew(STextBlock).Text(FText::FromString(TEXT("Choose a project or plugin Content folder. Subfolders are preserved. Keep Game Folder and Keep Plugin Folder control the extra Game and plugin name folders. You can type a new folder path below."))).AutoWrapText(true)]
		+ SVerticalBox::Slot().FillHeight(1)[Browser.Get().CreatePathPicker(Config)]
		+ SVerticalBox::Slot().AutoHeight().Padding(0, 8)
		[SAssignNew(PathBox, SEditableTextBox).Text(FText::FromString(Selected))]
		+ SVerticalBox::Slot().AutoHeight().HAlign(HAlign_Right)
		[SNew(SHorizontalBox)
		+ SHorizontalBox::Slot().AutoWidth().Padding(0, 0, 8, 0)
		[SNew(SButton).Text(FText::FromString(TEXT("Reflect"))).OnClicked_Lambda([&]() {
			Selected = PathBox->GetText().ToString().TrimStartAndEnd();
			Selected.ReplaceInline(TEXT("\\"), TEXT("/"));
			while (Selected.EndsWith(TEXT("/"))) Selected.LeftChopInline(1);
			if (!IsValidReflectionDestination(Selected)) {
				SpawnPrompt(TEXT("Reflect Destination"), TEXT("Choose a valid project or mounted plugin Content path, such as /Game/Reflected or /MCosmetics/Reflected."));
				return FReply::Handled();
			}
			Accepted = true;
			Window->RequestDestroyWindow();
			return FReply::Handled();
		})]
		+ SHorizontalBox::Slot().AutoWidth()
		[SNew(SButton).Text(FText::FromString(TEXT("Cancel"))).OnClicked_Lambda([Window]() {
			Window->RequestDestroyWindow();
			return FReply::Handled();
		})]]]);
	FSlateApplication::Get().AddModalWindow(Window, IMainFrameModule::Get().GetParentWindow());
	if (Accepted) OutRoot = Selected;
	return Accepted;
}
