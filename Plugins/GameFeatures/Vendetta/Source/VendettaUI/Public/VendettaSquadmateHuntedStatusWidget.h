#pragma once
#include "CoreMinimal.h"
#include "AthenaPlayerInfoBaseWidgetInterface.h"
#include "EVendettaHuntedStatus.h"
#include "VendettaWidgetBase.h"
#include "VendettaSquadmateHuntedStatusWidget.generated.h"

class AFortPlayerStateAthena;

UCLASS(Blueprintable, EditInlineNew)
class UVendettaSquadmateHuntedStatusWidget : public UVendettaWidgetBase, public IAthenaPlayerInfoBaseWidgetInterface {
    GENERATED_BODY()
public:
    UVendettaSquadmateHuntedStatusWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerHuntedStatusChanged_BP(EVendettaHuntedStatus HuntedStatus, EVendettaHuntedStatus SpecialNPCHuntedStatus);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerHuntedStatusChanged(AFortPlayerStateAthena* PlayerState, EVendettaHuntedStatus HuntedStatus, EVendettaHuntedStatus SpecialNPCHuntedStatus);
    

    // Fix for true pure virtual functions not being implemented
};

