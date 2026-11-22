#include "FortDecoItemDefinition.h"
#include "EFortItemType.h"
#include "Templates/SubclassOf.h"

UFortDecoItemDefinition::UFortDecoItemDefinition() {
    this->ItemType = EFortItemType::Deco;
    this->bItemHasDurability = false;
    this->bValidForLastEquipped = false;
    this->bReplacesEditedSurfaces = false;
    this->bCanBePlacedOnEnemyBuildings = false;
    this->GridSnapSizeOverride = -1.00f;
    this->RotationAngleIncrement = 90.00f;
    this->GridPlacementOffset = 0.00f;
    this->PlacementTypeOverride = EPlacementType::None;
    this->bForceIgnoreOverlapTest = false;
    this->bIgnoreCollisionWithVehicles = true;
    this->bForceIgnoreBuildingOverlaps = false;
    this->bIgnoreCollisionWithCriticalActors = false;
    this->bIgnoreCollisionWithStructuralGridActors = false;
    this->bIgnoreCollisionWithFortStaticMeshActors = false;
    this->bIgnoreCollisionWithPlayers = true;
    this->bDisableLocationLerpWhilePlacing = true;
    this->bDisableRotationLerpWhilePlacing = true;
    this->bDisableScaleLerpWhilePlacing = true;
    this->bAttachWhenPlacing = true;
    this->bAllowPlacementOnWorldGeometry = true;
    this->bAllowPlacementOnBuildings = true;
    this->bDestroySmallObjectsWhenPlaced = false;
    this->bSetOwningPlayerForSpawnedDeco = false;
    this->bSetSpawnedDecoOnPlayerTeam = true;
    this->bConsumeWhenPlaced = true;
    this->bCancelToolWhenPlaced = true;
    this->bCancelAbilityOnUnequip = true;
    this->bRequiresPlayerPlaceableAttachmentActors = false;
    this->bUseRelativeCameraRotation = true;
    this->bAllowStairsWhenAttachingToFloors = false;
    this->bSnapYawToHorizontalAxes = false;
    this->bAllowAnyFloorPlacement = false;
    this->bRequiresPermissionToEditWorld = false;
    this->bAutoCreateAttachmentBuilding = false;
    this->AutoCreateAttachmentBuildingResourceType = EFortResourceType::None;
    this->MaxPlacementDistance = 512;
    this->bReplacesDecoOnAttachment = false;
    this->bShowPreviewOnPressHeld = false;
}

bool UFortDecoItemDefinition::ShouldUseRelativeCameraRotation() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldSnapYawToHorizontalAxes() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldIgnoreCollisionWithVehicles() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldIgnoreCollisionWithStructuralGridActors() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldIgnoreCollisionWithPlayers() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldIgnoreCollisionWithFortStaticMeshActors() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldIgnoreCollisionWithCriticalActors() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldForceIgnoreOverlapTest() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldForceIgnoreBuildingOverlaps() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldDisableScaleLerpWhilePlacing() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldDisableRotationLerpWhilePlacing() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldDisableLocationLerpWhilePlacing() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldDestroySmallObjectsWhenPlaced() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldConsumeWhenPlaced() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldCancelToolWhenPlaced() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldCancelAbilityOnUnequip() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldAttachWhenPlacing() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldAllowStairsWhenAttachingToFloors() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldAllowPlacementOnWorldGeometry() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldAllowPlacementOnBuildings() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldAllowAnyFloorPlacement() const {
    return false;
}

bool UFortDecoItemDefinition::RequiresPlayerPlaceableAttachmentActors() const {
    return false;
}

bool UFortDecoItemDefinition::RequiresPermissionToEditWorld() const {
    return false;
}

float UFortDecoItemDefinition::GetRotationAngleIncrement() const {
    return RotationAngleIncrement;
}

TEnumAsByte<EPlacementType::Type> UFortDecoItemDefinition::GetPlacementTypeOverride() const {
    return EPlacementType::Free;
}

TSubclassOf<AFortDecoPreview> UFortDecoItemDefinition::GetPlacementPreviewClass() const {
    return NULL;
}

int32 UFortDecoItemDefinition::GetMaxPlacementDistance() const {
    return MaxPlacementDistance;
}

float UFortDecoItemDefinition::GetGridSnapSizeOverride() const {
    return GridSnapSizeOverride;
}

float UFortDecoItemDefinition::GetGridPlacementOffset() const {
    return GridPlacementOffset;
}

TSubclassOf<ABuildingActor> UFortDecoItemDefinition::GetBlueprintClass() const {
    return NULL;
}


