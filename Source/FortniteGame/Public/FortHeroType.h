#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Animation/PreviewCollectionInterface.h"
#include "GameplayTagContainer.h"
#include "FortAttributeInitializationKey.h"
#include "FortWorkerType.h"
#include "GameplayEffectApplicationInfo.h"
#include "Templates/SubclassOf.h"
#include "FortHeroType.generated.h"

class AFortPlayerPawn;
class UAnimMontage;
class UAthenaBackpackItemDefinition;
class UAthenaCharacterItemDefinition;
class UFortFeedbackBank;
class UFortHeroGameplayDefinition;
class UFortHeroSpecialization;
class UFortMontageLookupTable;
class UFrontendAnimInstance;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortHeroType : public UFortWorkerType, public IPreviewCollectionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceShowHeadAccessory: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceShowBackpack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, AssetBundles="ItemDetails, AvatarDisplay"))
    TArray<TSoftObjectPtr<UFortHeroSpecialization>> Specializations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMontageLookupTable> DefaultMontageLookupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMontageLookupTable> OverrideMontageLookupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, AssetBundles="ItemDetails, Equipped"))
    TArray<FGameplayEffectApplicationInfo> CombinedStatGEs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredGPTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortFeedbackBank> MaleOverrideFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortFeedbackBank> FemaleOverrideFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, AssetBundles="ItemDetails"))
    TSoftClassPtr<AFortPlayerPawn> OverridePawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortHeroGameplayDefinition* HeroGameplayDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCharacterItemDefinition* HeroCosmeticOutfitDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaBackpackItemDefinition* HeroCosmeticBackblingDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFrontendAnimInstance> FrontEndAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> FrontendAnimMontageIdleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontEndBackPreviewRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Subtype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAttributeInitializationKey AttributeInitKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle LegacyStatHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> ItemPreviewMontage_Male;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> ItemPreviewMontage_Female;
    
public:
    UFortHeroType();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSubType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSpecializations(TArray<UFortHeroSpecialization*>& OutSpecializations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortHeroGameplayDefinition* GetHeroGameplayDefinition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetFrontendAnimMontageIdleOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UFrontendAnimInstance> GetFrontendAnimClass() const;
    

    // Fix for true pure virtual functions not being implemented
public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("Hero", GetFName());
    }
public:
    const TArray<TSoftObjectPtr<UFortHeroSpecialization>>& GetSpecializationAssets() const { return Specializations; }
    virtual USkeletalMesh* GetPreviewBaseMesh() const override;
    virtual void GetPreviewSkeletalMeshes(TArray<USkeletalMesh*>& OutMeshes, TArray<TSubclassOf<UAnimInstance>>& OutAnimClasses) const override;
};

