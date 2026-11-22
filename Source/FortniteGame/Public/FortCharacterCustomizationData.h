#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortCharacterCustomizationData.generated.h"

class UAnimInstance;
class UCustomCharacterPart;
class UFortAnimInstance;
class UFortFootstepAudioBank;
class UFortWeaponAnimSet;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCharacterCustomizationData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UCustomCharacterPart>> CharacterPartOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortAnimInstance> AnimBPOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortWeaponAnimSet> AnimSetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UAnimInstance>> AnimLayersOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortFootstepAudioBank> FootstepBankOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UFortCharacterCustomizationData();

};

