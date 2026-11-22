#pragma once
#include "CoreMinimal.h"
#include "SkyfireBackpackComponentInitializerSoundTeleportStruct.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FSkyfireBackpackComponentInitializerSoundTeleportStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SFX_DeRez_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SFX_DeRez_Loop_FadeOut_Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SFX_DeRez_Loop_Stop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SFX_DeRez_Loop_3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SFX_DeRez_Loop_Stop_3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SFX_MX_PrisonTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SFX_MX_Prison_Reveal;
    
    SKYFIRERUNTIME_API FSkyfireBackpackComponentInitializerSoundTeleportStruct();
};

