#include "CraftingObjectComponent.h"
#include "Net/UnrealNetwork.h"

UCraftingObjectComponent::UCraftingObjectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bTakeItemsAtCraftingStart = true;
    this->bGiveIngredientsToCraftingObject = false;
    this->bGiveIngredientsToInstigator = false;
    this->bGiveToCraftingObject = false;
    this->bGiveResultToInstigator = false;
    this->PendingPickupCraftingItem = NULL;
    this->PendingPickupHeldCount = 0;
}

void UCraftingObjectComponent::OnRep_CraftingObjectRepStateData() {
}

void UCraftingObjectComponent::HandlePickupCraftingItemPickedUp(AFortPickup* PickUp, AFortPawn* InteractingPawn, const UFortWorldItemDefinition* WorldItemDefinition, FVector PickupLocation) {
}

void UCraftingObjectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCraftingObjectComponent, CraftingObjectRepStateData);
    DOREPLIFETIME(UCraftingObjectComponent, CraftingFormulaRow);
}


