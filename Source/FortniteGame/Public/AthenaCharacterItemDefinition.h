#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AthenaCharacterTaggedPartsList.h"
#include "AthenaCosmeticItemDefinition.h"
#include "EFortCustomGender.h"
#include "EFortCustomPartType.h"
#include "Animation/PreviewCollectionInterface.h"
#include "AthenaCharacterItemDefinition.generated.h"

class UAthenaBackpackItemDefinition;
class UFortFeedbackBank;
class UFortHeroType;
class UMarshalledVFX_AuthoredDataConfig;

UCLASS(Blueprintable, MinimalAPI)
class UAthenaCharacterItemDefinition : public UAthenaCosmeticItemDefinition, public IPreviewCollectionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UClass*> RequestedDataStores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EFortCustomPartType::Type>, UMarshalledVFX_AuthoredDataConfig*> AuthoredVFXData_ByPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortHeroType* HeroDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaBackpackItemDefinition* DefaultBackpack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAthenaCosmeticItemDefinition*> RequiredCosmeticItems;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviewPawnScale;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortCustomGender::Type> Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortFeedbackBank> FeedbackBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FAthenaCharacterTaggedPartsList> TaggedPartsOverride;
    
public:
    UAthenaCharacterItemDefinition();

public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("AthenaCharacter", GetFName());
    }
public:
    FORTNITEGAME_API virtual USkeletalMesh* GetPreviewBaseMesh() const override;
    FORTNITEGAME_API virtual void GetPreviewSkeletalMeshes(TArray<USkeletalMesh*>& OutMeshes, TArray<TSubclassOf<UAnimInstance>>& OutAnimClasses) const override;
};

