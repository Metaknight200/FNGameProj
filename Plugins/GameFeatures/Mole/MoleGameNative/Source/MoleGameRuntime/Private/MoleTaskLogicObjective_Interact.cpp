#include "MoleTaskLogicObjective_Interact.h"

UMoleTaskLogicObjective_Interact::UMoleTaskLogicObjective_Interact() {
    this->bUsesAssociatedTaskActors = true;
}

void UMoleTaskLogicObjective_Interact::OnTaskLinkComponentInteract(UMoleTaskLinkComponent* TaskLinkComponent, const AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionType) {
}


