/* Copyright Reflection Contributors 2024-2026 */

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"

/* Settings Substructures */
#include "Types/AnimationBlueprintSettings.h"
#include "Types/LevelSettings.h"
#include "Types/MeshSettings.h"
#include "Types/TextureSettings.h"
#include "Redirector.h"

#include "ReflectionSettings.generated.h"

extern FName GReflectionSettingsCategoryName;
extern FName GReflectionInternalName;

/* What becomes of a file that holds more than one asset.
 *
 * Most hold one and this decides nothing for them. Some hold a set: an HLOD proxy keeps the mesh it
 * stands in for, the material that draws it and the texture that material samples, all under the
 * one name, and every reference between them is written as a step inside that one file.
 *
 * Kept together they come out as the game keeps them, which is what those references describe, and
 * the content browser lists them side by side regardless. Split apart each becomes a file of its
 * own, which is easier to move one of, and leaves the references between them pointing at a file
 * that no longer holds what they name. */
UENUM()
enum class ERPackagedAssets : uint8 {
	/* The one file, holding everything it held */
	Together UMETA(DisplayName = "Kept Together"),

	/* A file each, named for the asset rather than for what it came in */
	Separate UMETA(DisplayName = "Split Apart")
};

USTRUCT()
struct FRSettings
{
	GENERATED_BODY()
public:
	/* Constructor to initialize default values */
	FRSettings() {
		AnimationBlueprint = FRAnimationBlueprintSettings();
		Texture = FRTextureSettings();
		Mesh = FRMeshSettings();
	}

	UPROPERTY(EditAnywhere, Config, Category = Settings)
	FRAnimationBlueprintSettings AnimationBlueprint;

	UPROPERTY(EditAnywhere, Config, Category = Settings)
	FRTextureSettings Texture;

	UPROPERTY(EditAnywhere, Config, Category = Settings)
	FRMeshSettings Mesh;

	/* What becomes of a file that holds more than one asset. */
	UPROPERTY(EditAnywhere, DisplayName = "Packaged Assets", Config, Category = Settings)
	ERPackagedAssets PackagedAssets = ERPackagedAssets::Together;

	UPROPERTY(EditAnywhere, Config, Category = Settings)
	bool SaveAssets = false;

	/* Whether what an asset names is fetched along with it. Off, references are left to whatever the project has. */
	UPROPERTY(EditAnywhere, DisplayName = "Import References", Config, Category = Settings)
	bool ImportReferences = true;

	/* Whether a blueprint gets its graphs. Off, everything else about it comes across and the graphs are left empty. */
	UPROPERTY(EditAnywhere, DisplayName = "Import Blueprint Code", Config, Category = Settings)
	bool ImportBlueprintCode = true;
};

/* Reconstruction Toolkit for Unreal Engine */
UCLASS(Config = EditorPerProjectUserSettings, DefaultConfig)
class REFLECTION_API UReflectionSettings : public UDeveloperSettings {
	GENERATED_BODY()
public:
	UReflectionSettings();

	virtual FText GetSectionText() const override;
	virtual void PostInitProperties() override;

#if WITH_EDITOR
	/* Switching the support prompt takes effect now rather than at the next start */
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

public:
	UPROPERTY(EditAnywhere, Config, Category = Redirectors, meta = (TitleProperty = "Name"))
	TArray<FRRedirector> Redirectors;

	UPROPERTY(EditAnywhere, Config, Category = Settings)
	FRSettings AssetSettings;

	/* Reading a level, which is experimental: what it places and what it leaves alone */
	UPROPERTY(EditAnywhere, DisplayName = "Level", Config, Category = Settings, meta = (EditCondition = "EnableExperiments"))
	FRLevelSettings Level;

	/* Runtime choice; Cloud tools and dependency fetching remain available in local JSON mode. */
	UPROPERTY(EditAnywhere, Config, DisplayName = "Use Cloud", Category = Settings,
		meta = (ToolTip = "Fetch assets from Cloud. Turn off to select locally exported JSON files. Cloud can still supply dependencies while it is running."))
	bool bCloudServer = true;

	UPROPERTY(EditAnywhere, Config, DisplayName = "Keep Original Asset Paths", Category = Settings,
		meta = (ToolTip = "Keep the existing import locations and redirectors. Turn off to choose a destination folder for each import. Subfolders are preserved."))
	bool KeepOriginalAssetPaths = true;

	UPROPERTY(EditAnywhere, Config, DisplayName = "Keep Game Folder", Category = Settings,
		meta = (EditCondition = "!KeepOriginalAssetPaths", ToolTip = "Keep the Game folder inside a custom destination, for example Destination/Game/Characters instead of Destination/Characters."))
	bool KeepGameFolder = false;

	UPROPERTY(EditAnywhere, Config, DisplayName = "Keep Plugin Folder", Category = Settings,
		meta = (EditCondition = "!KeepOriginalAssetPaths", ToolTip = "Keep the plugin name folder inside a custom destination, for example Destination/MyPlugin/Materials instead of Destination/Materials."))
	bool KeepPluginFolder = true;

	/* Retain the upstream config key so existing local JSON preferences can be migrated. */
	UPROPERTY(Config)
	bool UseLocalJson = false;

	/* Enables experimental/developing features. Features may not work as intended. */
	UPROPERTY(EditAnywhere, Config, DisplayName = "Experiments", Category = Settings, AdvancedDisplay)
	bool EnableExperiments = false;

	/* The nudge to star the repository, which comes round now and then */
	UPROPERTY(EditAnywhere, Config, DisplayName = "Support Prompt", Category = Settings, AdvancedDisplay)
	bool ShowSupportPrompt = true;
};
