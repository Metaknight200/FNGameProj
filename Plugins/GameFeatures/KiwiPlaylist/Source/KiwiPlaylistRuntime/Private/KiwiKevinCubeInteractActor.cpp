#include "KiwiKevinCubeInteractActor.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AKiwiKevinCubeInteractActor::AKiwiKevinCubeInteractActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneComponent"));
    this->PlayerPositionComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PositionComponent"));
    this->KevinCubeInteractGameplayEffectClass = NULL;
    this->NumberOfKevinCubeTouchAnimations = 3;
    this->KiwiRelevancyMutator = NULL;
    this->PlayerPositionComponent->SetupAttachment(RootComponent);
}

void AKiwiKevinCubeInteractActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AKiwiKevinCubeInteractActor, OccupiedPlayerPawns);
}


