#include "SpecialEventScriptMeshActor.h"
#include "MeshNetworkComponent.h"
#include "Net/UnrealNetwork.h"

ASpecialEventScriptMeshActor::ASpecialEventScriptMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->MeshNetworkComponent = CreateDefaultSubobject<UMeshNetworkComponent>(TEXT("MeshNetworkComp"));
}

void ASpecialEventScriptMeshActor::OnRep_RootStartTime() {
}

void ASpecialEventScriptMeshActor::MeshRootStartEvent() {
}

void ASpecialEventScriptMeshActor::MeshRootResetEvent() {
}

void ASpecialEventScriptMeshActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpecialEventScriptMeshActor, RootStartTime);
}


