#pragma once
#include "CoreMinimal.h"
#include "FortGameplayCueNotify_Loop.h"
#include "GoopAudioMapRangeClamped.h"
#include "FortGameplayCueNotifyLoop_Goop.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class AFortGameplayCueNotifyLoop_Goop : public AFortGameplayCueNotify_Loop {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpeedParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IsFallingParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGoopAudioMapRangeClamped SpeedMapRangeClamped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* LoopingAudioComponent;
    
public:
    AFortGameplayCueNotifyLoop_Goop(const FObjectInitializer& ObjectInitializer);

};

