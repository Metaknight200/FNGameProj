#pragma once
#include "CoreMinimal.h"
#include "FortMobileActionButtonBehavior.h"
#include "AthenaRadioStation.h"
#include "FortMobileActionButtonBehavior_ToggleRadio.generated.h"

class UPaperSprite;
class UStreamingRadioPlayerComponent;

UCLASS(Blueprintable)
class SRIRACHARANCHUI_API UFortMobileActionButtonBehavior_ToggleRadio : public UFortMobileActionButtonBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* ToggleRadioOffSprite;
    
public:
    UFortMobileActionButtonBehavior_ToggleRadio();

private:
    UFUNCTION(BlueprintCallable)
    void HandleRadioStopped(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);
    
    UFUNCTION(BlueprintCallable)
    void HandleRadioPlaying(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);
    
};

