#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "FortHUDElementWidget.h"
#include "FortHUDEquipProgressBase.generated.h"

class AFortPlayerControllerSpectating;
class AFortPlayerState;
class UCommonTextBlock;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHUDEquipProgressBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_TimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RelevantGameplayCueTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProgressBarMaterialParamName;
    
public:
    UFortHUDEquipProgressBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimeRemainingChanged(const float TimeRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProgressStarted(const float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProgressEnded();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleUIGameplayCueEvent(FName CueName, TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters& Parameters);
    
    UFUNCTION(BlueprintCallable)
    void HandleReplayScrubComplete();
    
    UFUNCTION(BlueprintCallable)
    void HandleFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorPC, AFortPlayerState* NewFollowedPlayer);
    
};

