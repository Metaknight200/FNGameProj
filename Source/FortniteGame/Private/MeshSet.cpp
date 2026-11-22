#include "MeshSet.h"

FMeshSet::FMeshSet() {
    // Initialize reflected value fields omitted by the dump.
    this->LootSpawnLocation = FVector::ZeroVector;
    this->Weight = 0.00f;
    this->ResourceType = EFortResourceType::Wood;
    this->bDoNotBlockBuildings = false;
    this->bDestroyOnPlayerBuildingPlacement = false;
    this->bNeedsDamageOverlay = false;
    this->BaseMesh = NULL;
    this->BreakEffect = NULL;
    this->DeathParticles = NULL;
    this->DeathSound = NULL;
    this->ConstructedEffect = NULL;
    this->SearchedMesh = NULL;
    this->LootNoiseRange = 0.00f;
}

