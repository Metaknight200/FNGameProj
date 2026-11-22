#pragma once
#include "CoreMinimal.h"
#include "EAvailableSquadSlotsListEntryState.h"
#include "FortHUDElementWidget.h"
#include "AthenaAvailableSquadSlotsListEntryBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAthenaAvailableSquadSlotsListEntryBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvailableSquadSlotsListEntryState CurrentEntryState;
    
public:
    UAthenaAvailableSquadSlotsListEntryBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEntryStateUpdated(const EAvailableSquadSlotsListEntryState NewEntryState);
    
};

