#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "AthenaPreserveSquadButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaPreserveSquadButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
    UAthenaPreserveSquadButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandlePreserveSquadChanged(bool bPreserveSquad);
    
};

