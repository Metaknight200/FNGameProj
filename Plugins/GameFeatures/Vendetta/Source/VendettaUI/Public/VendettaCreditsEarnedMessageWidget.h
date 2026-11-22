#pragma once
#include "CoreMinimal.h"
#include "VendettaWidgetBase.h"
#include "VendettaCreditsEarnedMessageWidget.generated.h"

class AFortPlayerStateAthena;

UCLASS(Blueprintable, EditInlineNew)
class UVendettaCreditsEarnedMessageWidget : public UVendettaWidgetBase {
    GENERATED_BODY()
public:
    UVendettaCreditsEarnedMessageWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerEliminatedBountyTarget_BP(const AFortPlayerStateAthena* VictimPlayerState, const AFortPlayerStateAthena* KillerPlayerState, const AFortPlayerStateAthena* NewTargetPlayerState, int32 VictimRewardValue, int32 VictimBonusValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerEliminatedBountyTarget(const AFortPlayerStateAthena* VictimPlayerState, const AFortPlayerStateAthena* KillerPlayerState, const AFortPlayerStateAthena* NewTargetPlayerState, int32 VictimRewardValue, int32 VictimBonusValue);
    
};

