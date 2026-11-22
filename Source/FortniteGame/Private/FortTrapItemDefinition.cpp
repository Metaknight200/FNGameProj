#include "FortTrapItemDefinition.h"
#include "EFortItemType.h"

UFortTrapItemDefinition::UFortTrapItemDefinition() {
    this->ItemType = EFortItemType::Trap;
    this->bItemHasDurability = true;
    this->bForceIgnoreOverlapTest = true;
    this->bIgnoreCollisionWithStructuralGridActors = true;
    this->bIgnoreCollisionWithFortStaticMeshActors = true;
    this->bAllowPlacementOnWorldGeometry = false;
    this->bCancelToolWhenPlaced = false;
    this->bRequiresPermissionToEditWorld = true;
    this->bKnockBackUsingPawnDir = false;
}


