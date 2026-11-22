#include "FortCharacterMovementMutator.h"
#include "FortCharacterMovementMutatorComponent.h"

AFortCharacterMovementMutator::AFortCharacterMovementMutator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->MovementMutatorComponentClass = UFortCharacterMovementMutatorComponent::StaticClass();
}

void AFortCharacterMovementMutator::OnFortPawnChanged(AFortPawn* NewPawn) {
}


