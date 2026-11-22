#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ApplyVariantsAdditionalParams.h"
#include "AthenaCosmeticMaterialOverride.h"
#include "CosmeticVariantInfo.h"
#include "EVariantUnlockType.h"
#include "FortAccountItemDefinition.h"
#include "FortAthenaLoadout.h"
#include "FortCosmeticAdaptiveStatPreview.h"
#include "FortCosmeticVariantPreview.h"
#include "McpVariantChannelInfo.h"
#include "Templates/SubclassOf.h"
#include "AthenaCosmeticItemDefinition.generated.h"

class AActor;
class AFortCosmeticReactivePreview;
class AFortItemPreviewActor;
class AFortPlayerController;
class AFortPlayerPawn;
class UAnimMontage;
class UAthenaCharacterItemDefinition;
class UFXSystemAsset;
class UFortCosmeticVariant;
class UFortItem;
class UFortMontageItemDefinitionBase;
class UFortVariantPreviewGenerator;
class UPrimitiveComponent;
class USoundLibrary;
class UTexture2D;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UAthenaCosmeticItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsShuffleTile: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsOwnedByCampaignHero: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasMoreThanOneCharacterPartVariant: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideIfNotOwned: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInitializedConfiguredDynamicInstallBundles: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDynamicInstallBundlesError: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDynamicInstallBundlesCancelled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDynamicInstallBundlesComplete: 1;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double DynamicInstallBundlesUpdateStartTime;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 DynamicInstallBundleRequestRefCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DynamicInstallBundleRequestRetryCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVariantUnlockType VariantUnlockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator PreviewPawnRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USoundLibrary>> FoleyLibraries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisallowedCosmeticTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MetaTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> VariantChannelsToNeverSendToMCP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FCosmeticVariantInfo, TSoftClassPtr<AFortCosmeticReactivePreview>> ReactivePreviewDrivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaCosmeticMaterialOverride> MaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ObservedPlayerStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortMontageItemDefinitionBase*> BuiltInEmotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortCosmeticVariant*> ItemVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VariantChannelToUseForThumbnails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCosmeticVariantPreview> ItemVariantPreviews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVariantPreviewGenerator* ItemVariantPreviewGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DirectAquisitionStyleDisclaimerOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCosmeticAdaptiveStatPreview> ItemObservedStatPreviews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnlockRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAccountItemDefinition> UnlockingItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortItemPreviewActor> ItemPreviewActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFXSystemAsset> ItemPreviewParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> ItemPreviewMontage_Male;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> ItemPreviewMontage_Female;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAthenaCharacterItemDefinition> ItemPreviewHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> ConfiguredDynamicInstallBundles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> PendingDynamicInstallBundles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExclusiveRequiresOutfitTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CustomExclusiveCallout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ExclusiveDesciption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ExclusiveIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ItemSearchTags;
    
public:
    UAthenaCosmeticItemDefinition();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateLockedFloatSliderVariant(const AFortPlayerController* FortPC, FGameplayTag ChannelTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwnedByCampaignHero() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledInSTW() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasVariants() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasModifiableVariants(UFortItem* InItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVariantUnlockType GetVariantUnlockType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortCosmeticVariant* GetVariantChannel(FGameplayTag InVariantChannelTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetPreviewPawnRotationOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortCosmeticVariantPreview> GetOrGenerateItemVariantPreviews(const AFortPlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortCosmeticVariantPreview> GetItemVariantPreviews() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortCosmeticAdaptiveStatPreview> GetItemAdaptiveStatPreviews() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDefaultVariantChannels(TArray<FMcpVariantChannelInfo>& OutDefaultVariantData) const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAllPossibleNativeMeshComponentNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAdaptivePlayerStatsList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GatherVariantAssets(AActor* InActor, const FFortAthenaLoadout& Loadout, TArray<FSoftObjectPath>& VariantAssetsNeeded, AFortPlayerPawn* InPlayerPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyVariantsToComponent(UPrimitiveComponent* InComponent, const FFortAthenaLoadout& Loadout, const FApplyVariantsAdditionalParams& Params) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyVariants(AActor* InActor, const FFortAthenaLoadout& Loadout, const FApplyVariantsAdditionalParams& Params) const;
    
};

