#include "Modules/ModuleManager.h"
#include "AssetToolsModule.h"
#include "AssetTypeActions_Base.h"
#include "IAssetTools.h"
#include "ThumbnailRendering/ThumbnailManager.h"
#include "FortniteThumbnails.h"
#include "FortItemDefinition.h"
#include "CustomCharacterPart.h"
#include "BuildingTextureData.h"

class FFortItemAssetActions : public FAssetTypeActions_Base {
public:
    virtual FText GetName() const override { return NSLOCTEXT("FortniteEditor", "ItemDefinitions", "Fortnite Item Definition"); }
    virtual FColor GetTypeColor() const override { return FColor(77, 148, 209); }
    virtual UClass* GetSupportedClass() const override { return UFortItemDefinition::StaticClass(); }
    virtual uint32 GetCategories() override { return EAssetTypeCategories::Misc; }
};

class FFortniteEditorModule : public IModuleInterface {
    TSharedPtr<IAssetTypeActions> ItemActions;
public:
    virtual void StartupModule() override {
        if (IsRunningCommandlet()) return;
        IAssetTools& Tools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
        ItemActions = MakeShared<FFortItemAssetActions>();
        Tools.RegisterAssetTypeActions(ItemActions.ToSharedRef());
        UThumbnailManager& Manager = UThumbnailManager::Get();
        Manager.RegisterCustomRenderer(UFortItemDefinition::StaticClass(), UFortItemDefinitionThumbnailRenderer::StaticClass());
        Manager.RegisterCustomRenderer(UCustomCharacterPart::StaticClass(), UFortCharacterPartThumbnailRenderer::StaticClass());
        Manager.RegisterCustomRenderer(UBuildingTextureData::StaticClass(), UFortBuildingTextureThumbnailRenderer::StaticClass());
    }
    virtual void ShutdownModule() override {
        if (IsRunningCommandlet() || !UObjectInitialized()) return;
        if (FModuleManager::Get().IsModuleLoaded("AssetTools") && ItemActions.IsValid()) {
            FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get().UnregisterAssetTypeActions(ItemActions.ToSharedRef());
        }
        if (!IsEngineExitRequested()) {
            UThumbnailManager& Manager = UThumbnailManager::Get();
            Manager.UnregisterCustomRenderer(UFortItemDefinition::StaticClass());
            Manager.UnregisterCustomRenderer(UCustomCharacterPart::StaticClass());
            Manager.UnregisterCustomRenderer(UBuildingTextureData::StaticClass());
        }
        ItemActions.Reset();
    }
};
IMPLEMENT_MODULE(FFortniteEditorModule, FortniteEditor);
