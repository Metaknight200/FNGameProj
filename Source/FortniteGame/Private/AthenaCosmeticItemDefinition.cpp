#include "AthenaCosmeticItemDefinition.h"

UAthenaCosmeticItemDefinition::UAthenaCosmeticItemDefinition() {
    this->bAllowMultipleStacks = false;
    this->GrantToProfileType = TEXT("athena");
    this->bIsShuffleTile = false;
    this->bIsOwnedByCampaignHero = false;
    this->bHasMoreThanOneCharacterPartVariant = false;
    this->bHideIfNotOwned = false;
    this->bInitializedConfiguredDynamicInstallBundles = false;
    this->bDynamicInstallBundlesError = false;
    this->bDynamicInstallBundlesCancelled = false;
    this->bDynamicInstallBundlesComplete = false;
    this->DynamicInstallBundlesUpdateStartTime = 0.00f;
    this->DynamicInstallBundleRequestRefCount = 0;
    this->DynamicInstallBundleRequestRetryCount = 0;
    this->VariantUnlockType = EVariantUnlockType::UnlockAll;
    this->ItemVariantPreviewGenerator = NULL;
}

void UAthenaCosmeticItemDefinition::UpdateLockedFloatSliderVariant(const AFortPlayerController* FortPC, FGameplayTag ChannelTag) const {
}

bool UAthenaCosmeticItemDefinition::IsOwnedByCampaignHero() const {
    return false;
}

bool UAthenaCosmeticItemDefinition::IsEnabledInSTW() const {
    return false;
}

bool UAthenaCosmeticItemDefinition::HasVariants() const {
    return false;
}

bool UAthenaCosmeticItemDefinition::HasModifiableVariants(UFortItem* InItem) const {
    return false;
}

EVariantUnlockType UAthenaCosmeticItemDefinition::GetVariantUnlockType() const {
    return EVariantUnlockType::UnlockAll;
}

UFortCosmeticVariant* UAthenaCosmeticItemDefinition::GetVariantChannel(FGameplayTag InVariantChannelTag) const {
    return NULL;
}

FRotator UAthenaCosmeticItemDefinition::GetPreviewPawnRotationOffset() const {
    return FRotator{};
}

TArray<FFortCosmeticVariantPreview> UAthenaCosmeticItemDefinition::GetOrGenerateItemVariantPreviews(const AFortPlayerController* PlayerController) const {
    return TArray<FFortCosmeticVariantPreview>();
}

TArray<FFortCosmeticVariantPreview> UAthenaCosmeticItemDefinition::GetItemVariantPreviews() const {
    return TArray<FFortCosmeticVariantPreview>();
}

TArray<FFortCosmeticAdaptiveStatPreview> UAthenaCosmeticItemDefinition::GetItemAdaptiveStatPreviews() const {
    return TArray<FFortCosmeticAdaptiveStatPreview>();
}

void UAthenaCosmeticItemDefinition::GetDefaultVariantChannels(TArray<FMcpVariantChannelInfo>& OutDefaultVariantData) const {
}

TArray<FString> UAthenaCosmeticItemDefinition::GetAllPossibleNativeMeshComponentNames() {
    return TArray<FString>();
}

FGameplayTagContainer UAthenaCosmeticItemDefinition::GetAdaptivePlayerStatsList() const {
    return FGameplayTagContainer{};
}

void UAthenaCosmeticItemDefinition::GatherVariantAssets(AActor* InActor, const FFortAthenaLoadout& Loadout, TArray<FSoftObjectPath>& VariantAssetsNeeded, AFortPlayerPawn* InPlayerPawn) const {
}

void UAthenaCosmeticItemDefinition::ApplyVariantsToComponent(UPrimitiveComponent* InComponent, const FFortAthenaLoadout& Loadout, const FApplyVariantsAdditionalParams& Params) const {
}

void UAthenaCosmeticItemDefinition::ApplyVariants(AActor* InActor, const FFortAthenaLoadout& Loadout, const FApplyVariantsAdditionalParams& Params) const {
}


