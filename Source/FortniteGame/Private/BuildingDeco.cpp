#include "BuildingDeco.h"

ABuildingDeco::ABuildingDeco(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_DynamicBuildingPlacementType = GetClass()->FindPropertyByName("DynamicBuildingPlacementType");
    (*p_DynamicBuildingPlacementType->ContainerPtrToValuePtr<TEnumAsByte<EDynamicBuildingPlacementType::Type>>(this)) = EDynamicBuildingPlacementType::DestroyIfColliding;
    this->bIsNavigationRelevant = false;
    this->BuildingType = EFortBuildingType::Deco;
    this->bNoCollision = true;
    this->bPropagatesBounceEffects = false;
    this->bCastShadow = false;
}


