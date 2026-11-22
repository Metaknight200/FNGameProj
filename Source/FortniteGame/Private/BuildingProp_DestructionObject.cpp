#include "BuildingProp_DestructionObject.h"

ABuildingProp_DestructionObject::ABuildingProp_DestructionObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ABuildingProp_DestructionObject::OnBuildingAttributeSetHealthChanged() {
}

FText ABuildingProp_DestructionObject::GetObjectiveNameText(const int32 ObjectiveNameIndex) const {
    return FText::GetEmpty();
}


