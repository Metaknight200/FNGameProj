#include "BuildingPlayerPrimitivePreview.h"
#include "EBuildingActorComponentCreationPolicy.h"

ABuildingPlayerPrimitivePreview::ABuildingPlayerPrimitivePreview(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->AbilitySystemComponentCreationPolicy = EBuildingActorComponentCreationPolicy::Never;
    this->bNoCollision = true;
}


