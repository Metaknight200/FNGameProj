#include "FortPlayerPetRepState.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AFortPlayerPetRepState::AFortPlayerPetRepState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent0"));
    this->LookAtTarget = NULL;
    this->PetItemDef = NULL;
}

void AFortPlayerPetRepState::OnRep_StimuliTag() {
}

void AFortPlayerPetRepState::OnRep_PetItemDef() {
}

void AFortPlayerPetRepState::OnRep_LookAtTarget() {
}

AFortPlayerPawn* AFortPlayerPetRepState::GetFortPlayerPawn() const {
    return NULL;
}

void AFortPlayerPetRepState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerPetRepState, LookAtTarget);
    DOREPLIFETIME(AFortPlayerPetRepState, PetItemDef);
    DOREPLIFETIME(AFortPlayerPetRepState, StimuliTag);
}


