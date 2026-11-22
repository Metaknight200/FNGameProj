#pragma once
#include "CoreMinimal.h"
#include "SkyfireBackpackComponentInitializerSoundRarityStruct.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FSkyfireBackpackComponentInitializerSoundRarityStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SFX_RarityChange_3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SFX_RarityChange_3P_Rare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SFX_RarityChange_3P_Epic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SFX_RarityChange_3P_Legendary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SFX_RarityChange_1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SFX_RarityChange_1P_Rare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SFX_RarityChange_1P_Epic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SFX_RarityChange_1P_Legendary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickVolume_RarityChange;
    
    SKYFIRERUNTIME_API FSkyfireBackpackComponentInitializerSoundRarityStruct();
};

