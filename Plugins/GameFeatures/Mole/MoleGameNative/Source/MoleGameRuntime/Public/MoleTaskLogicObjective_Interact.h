#pragma once
#include "CoreMinimal.h"
#include "EInteractionBeingAttempted.h"
#include "MoleObjectiveCriteriaFloat.h"
#include "MoleTaskLogicObjective.h"
#include "MoleTaskLogicObjective_Interact.generated.h"

class AFortPawn;
class UMoleTaskLinkComponent;

UCLASS(Blueprintable, EditInlineNew)
class UMoleTaskLogicObjective_Interact : public UMoleTaskLogicObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoleObjectiveCriteriaFloat Quantity;
    
public:
    UMoleTaskLogicObjective_Interact();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTaskLinkComponentInteract(UMoleTaskLinkComponent* TaskLinkComponent, const AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionType);
    
};

