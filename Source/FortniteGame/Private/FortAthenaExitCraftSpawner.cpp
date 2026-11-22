#include "FortAthenaExitCraftSpawner.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"

AFortAthenaExitCraftSpawner::AFortAthenaExitCraftSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComp_0"));
    this->DestructionOverlapCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DestructionOverlapMesh_0"));
    this->ExitCraftInfo = NULL;
    this->DestructionOverlapCapsule->SetupAttachment(RootComponent);
}

void AFortAthenaExitCraftSpawner::StartExitCraftSpawnTimer() {
}

void AFortAthenaExitCraftSpawner::DestroyBlockingActors() {
}


