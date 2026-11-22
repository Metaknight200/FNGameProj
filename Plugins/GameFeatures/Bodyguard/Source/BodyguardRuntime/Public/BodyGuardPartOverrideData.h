#pragma once
#include "CoreMinimal.h"
#include "EFortCustomBodyType.h"
#include "EFortCustomGender.h"
#include "GameplayTagContainer.h"
#include "BodyGuardPartOverrideData.generated.h"

class UCustomCharacterPart;

USTRUCT(BlueprintType)
struct FBodyGuardPartOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortCustomGender::Type> Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortCustomBodyType::Type> BodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> PartsToSwapIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRemoveExtras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> PartsToAddIfSpecialTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CosmeticSwapTag;
    
    BODYGUARDRUNTIME_API FBodyGuardPartOverrideData();
};

