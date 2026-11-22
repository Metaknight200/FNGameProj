#include "FortAthenaMutator_PlayerSpawnPod.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_PlayerSpawnPod::AFortAthenaMutator_PlayerSpawnPod(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->PodClass = NULL;
    this->DuringStasisEffectClass = NULL;
    this->EjectedFromSpawnPodEffectClass = NULL;
    this->bShouldLaunchIndividualPods = false;
    this->TeleportMutator = NULL;
    this->ViewTargetClass = NULL;
    this->PawnFallingCameraMode = NULL;
}

void AFortAthenaMutator_PlayerSpawnPod::SetViewTarget(AFortPlayerControllerAthena* Controller, AActor* ViewTarget, const FViewTargetTransitionParams& ViewTargetTransitionParams, const bool bDestroyOldViewTarget) {
}

void AFortAthenaMutator_PlayerSpawnPod::OnSingleTeleportComplete(AFortPlayerStateAthena* PlayerState) {
}

void AFortAthenaMutator_PlayerSpawnPod::OnRep_PodDataArray(TArray<FPlayerSpawnPodData>& OldPodDataArray) {
}

void AFortAthenaMutator_PlayerSpawnPod::OnRep_BlockedAbilitySystemComponents() {
}

void AFortAthenaMutator_PlayerSpawnPod::OnPodDestroyed(AActor* DestroyedActor) {
}

void AFortAthenaMutator_PlayerSpawnPod::OnAllTeleportComplete() {
}

void AFortAthenaMutator_PlayerSpawnPod::HandlePodLanded(UActorComponent* InComponent) {
}

bool AFortAthenaMutator_PlayerSpawnPod::GetPodDataForID(const int32 ID, FPlayerSpawnPodData& OutPodData, const FString& ContextString) {
    return false;
}

bool AFortAthenaMutator_PlayerSpawnPod::GetPodDataForActor(const AActor* Actor, FPlayerSpawnPodData& OutPodData, const FString& ContextString) {
    return false;
}

float AFortAthenaMutator_PlayerSpawnPod::GetFallDuration() const {
    return 0.0f;
}

void AFortAthenaMutator_PlayerSpawnPod::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_PlayerSpawnPod, PodDataArray);
    DOREPLIFETIME(AFortAthenaMutator_PlayerSpawnPod, BlockedAbilitySystemComponents);
    DOREPLIFETIME(AFortAthenaMutator_PlayerSpawnPod, bShouldLaunchIndividualPods);
}


