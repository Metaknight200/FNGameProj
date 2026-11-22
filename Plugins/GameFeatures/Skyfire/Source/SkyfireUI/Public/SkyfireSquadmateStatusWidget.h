#pragma once
#include "CoreMinimal.h"
#include "AthenaPlayerInfoBaseWidgetInterface.h"
#include "SkyfireWidgetBase.h"
#include "SkyfireSquadmateStatusWidget.generated.h"

class AFortPlayerStateAthena;

UCLASS(Blueprintable, EditInlineNew)
class USkyfireSquadmateStatusWidget : public USkyfireWidgetBase, public IAthenaPlayerInfoBaseWidgetInterface {
    GENERATED_BODY()
public:
    USkyfireSquadmateStatusWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadMemberMothershipStatusChanged(const bool bIsOnMothership);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnSquadMemberMothershipStatusChanged(const AFortPlayerStateAthena* SquadMemberPlayerState, const bool bIsOnMothership);
    

    // Fix for true pure virtual functions not being implemented
};

