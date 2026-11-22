#include "FortPhysicsTowHook.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AFortPhysicsTowHook::AFortPhysicsTowHook(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->AlwaysAttachedActor = NULL;
}

void AFortPhysicsTowHook::OnRep_ReplicatedAttachStates() {
}

bool AFortPhysicsTowHook::GetStartPoint(FVector& OutStartPoint) const {
    return false;
}

bool AFortPhysicsTowHook::GetEndPoint(FVector& OutEndPoint) const {
    return false;
}

void AFortPhysicsTowHook::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPhysicsTowHook, ReplicatedAttachStates);
}


