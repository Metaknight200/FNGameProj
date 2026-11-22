#include "FortAthenaMutator_NamePlate.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_NamePlate::AFortAthenaMutator_NamePlate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->DisplayMode = EIndicatorDisplayMode::Default;
}

void AFortAthenaMutator_NamePlate::OnRep_DisplayMode() {
}

void AFortAthenaMutator_NamePlate::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_NamePlate, DisplayMode);
}


