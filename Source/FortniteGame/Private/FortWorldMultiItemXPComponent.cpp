#include "FortWorldMultiItemXPComponent.h"

UFortWorldMultiItemXPComponent::UFortWorldMultiItemXPComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningWeapon = NULL;
    this->OwnerPawn = NULL;
    this->OwningMultiItem = NULL;
}

AFortWeapon* UFortWorldMultiItemXPComponent::GetWeaponActor() const {
    return NULL;
}

AFortPawn* UFortWorldMultiItemXPComponent::GetOwningPawn() const {
    return NULL;
}

UFortWorldMultiItem* UFortWorldMultiItemXPComponent::GetOwningMultiItem() const {
    return OwningMultiItem;
}


