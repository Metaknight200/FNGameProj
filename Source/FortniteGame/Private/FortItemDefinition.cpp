#include "FortItemDefinition.h"
#include "Templates/SubclassOf.h"

void UFortItemDefinition::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const {
    TagContainer = GameplayTags;
}

bool UFortItemDefinition::HasMatchingGameplayTag(FGameplayTag TagToCheck) const {
    return IGameplayTagAssetInterface::HasMatchingGameplayTag(TagToCheck);
}

bool UFortItemDefinition::HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const {
    return IGameplayTagAssetInterface::HasAnyMatchingGameplayTags(TagContainer);
}

bool UFortItemDefinition::HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const {
    return IGameplayTagAssetInterface::HasAllMatchingGameplayTags(TagContainer);
}

UFortItemDefinition::UFortItemDefinition() {
    this->Rarity = EFortRarity::Uncommon;
    this->ItemType = EFortItemType::Max_None;
    this->PrimaryAssetIdItemTypeOverride = EFortItemType::Max_None;
    this->FilterOverride = EFortInventoryFilter::Max_None;
    this->Tier = EFortItemTier::No_Tier;
    this->MaxTier = EFortItemTier::No_Tier;
    this->Access = EFortTemplateAccess::Normal;
    this->bIsAccountItem = false;
    this->bNeverPersisted = false;
    this->bAllowMultipleStacks = true;
    this->bAutoBalanceStacks = true;
    this->bForceAutoPickup = false;
    this->bInventorySizeLimited = false;
    this->FrontendPreviewScale = 1.00f;
    this->Series = NULL;
}

bool UFortItemDefinition::ShouldShowPreviewOnCurrentHero(const int32 InSubSlot) const {
    return false;
}

bool UFortItemDefinition::IsStackable() const {
    return false;
}

bool UFortItemDefinition::IsInventorySizeLimited() const {
    return bInventorySizeLimited;
}

TSoftObjectPtr<UTexture2D> UFortItemDefinition::GetWidePreviewImage() const {
    return WidePreviewImage;
}

TSubclassOf<UFortTooltip> UFortItemDefinition::GetTooltip(bool bSummaryTooltip) const {
    return NULL;
}

EFortItemTier UFortItemDefinition::GetTier() const {
    return Tier;
}

FSlateBrush UFortItemDefinition::GetSmallPreviewImageBrush() const {
    return FSlateBrush{};
}

TSoftObjectPtr<UTexture2D> UFortItemDefinition::GetSmallPreviewImage() const {
    return SmallPreviewImage;
}

FText UFortItemDefinition::GetSingleLineDescription() const {
    return Description;
}

FText UFortItemDefinition::GetShortDescription() const {
    return ShortDescription;
}

FText UFortItemDefinition::GetRichDescription() const {
    return FText::GetEmpty();
}

FFortColorPalette UFortItemDefinition::GetRarityOrSeriesColors() const {
    return FFortColorPalette{};
}

EFortRarity UFortItemDefinition::GetRarity() const {
    return Rarity;
}

bool UFortItemDefinition::GetPreviewStaticMeshAsset(TSoftObjectPtr<UStaticMesh>& Asset) const {
    return false;
}

bool UFortItemDefinition::GetPreviewSkeletalMeshAsset(TSoftObjectPtr<USkeletalMesh>& Asset) const {
    return false;
}

bool UFortItemDefinition::GetPreviewPrefabAssetAtSubSlot(TSoftClassPtr<AActor>& Asset, const int32 InSubSlot) const {
    return false;
}

bool UFortItemDefinition::GetPreviewPrefabAsset(TSoftClassPtr<AActor>& Asset) const {
    return false;
}

FTransform UFortItemDefinition::GetPreviewMeshOffset() const {
    return FTransform{};
}

void UFortItemDefinition::GetPreviewAssets(TArray<TSoftObjectPtr<UObject>>& Assets) const {
}

FString UFortItemDefinition::GetPersistentName() const {
    return TEXT("");
}

TSoftObjectPtr<UTexture2D> UFortItemDefinition::GetLargePreviewImage() const {
    return LargePreviewImage;
}

FText UFortItemDefinition::GetItemTypeName(bool bUsePlural) const {
    return FText::GetEmpty();
}

EFortItemType UFortItemDefinition::GetItemType() const {
    return ItemType;
}

TSoftObjectPtr<UTexture2D> UFortItemDefinition::GetInactivePreviewImage() const {
    return NULL;
}

FSoftObjectPath UFortItemDefinition::GetHiResDisplayAssetPath() const {
    return FSoftObjectPath{};
}

UFortTooltipDisplayStatsList* UFortItemDefinition::GetDisplayStats() const {
    return NULL;
}

FText UFortItemDefinition::GetDisplayName(bool bBaseName) const {
    return DisplayName;
}

FSoftObjectPath UFortItemDefinition::GetDisplayAssetPath() const {
    return FSoftObjectPath{};
}

TArray<FText> UFortItemDefinition::GetDescription() const {
    return TArray<FText>();
}

void UFortItemDefinition::CustomizePreviewPrefab(AActor* PrefabInstance) {
}

void UFortItemDefinition::CustomizePreviewMesh(UMeshComponent* Mesh) const {
}

UFortItem* UFortItemDefinition::CreateTemporaryItemInstanceBP(int32 Count, int32 Level) const {
    return NULL;
}

UFortItem* UFortItemDefinition::CreateTemporaryInstanceFromExistingItemBP(UFortItem* ExistingItem, int32 Count, int32 Level) const {
    return NULL;
}

void UFortItemDefinition::CopyTemplateIdToClipboard() {
}


