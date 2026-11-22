#include "SpecialEventScript.h"
#include "Net/UnrealNetwork.h"

ASpecialEventScript::ASpecialEventScript(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->MasterSequence = NULL;
    this->DropDeadWindowSizeInSeconds = 1800.00f;
    this->DelayAfterConentLoad = 5.00f;
    this->DelayAfterWarmup = 1.00f;
    this->ForceReturnToMainMenuTime = 900.00f;
    this->ForceReturnToMainMenuTimeRandomness = 60.00f;
    this->MinDelayReturnToMainMenu = 1.00f;
    this->MaxDelayReturnToMainMenu = 120.00f;
    this->ReplicatedActivePhaseIndex = -1;
    this->MeshNetworkComponent = NULL;
}

void ASpecialEventScript::UpdateMasterSequence_Implementation(float Time) {
}

void ASpecialEventScript::StartEventAtIndex(int32 InStartingIndex) {
}

void ASpecialEventScript::OnRep_ReplicatedActivePhaseIndex() {
}



void ASpecialEventScript::AttemptStartNextPhase(FGameplayTag CurrentPhaseTag) {
}

void ASpecialEventScript::AttemptFinishPhase(FGameplayTag PhaseTag) {
}

void ASpecialEventScript::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpecialEventScript, MasterSequence);
    DOREPLIFETIME(ASpecialEventScript, ReplicatedActivePhaseIndex);
}


