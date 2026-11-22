#include "FortPickupInteractOverrideComponent_Crafting.h"

UFortPickupInteractOverrideComponent_Crafting::UFortPickupInteractOverrideComponent_Crafting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LastPickupItemDef = NULL;
    this->LastFocusedItemDef = NULL;
    this->ContextualCraftingInteractDuration = 0.50f;
    this->CachedInteractionType = IT_NoInteraction;
    this->CachedInteractionBeingAttempted = AllInteraction;
}


