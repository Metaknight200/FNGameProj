#include "FortControllerComponent_GameplayCinematic.h"
#include "Net/UnrealNetwork.h"

UFortControllerComponent_GameplayCinematic::UFortControllerComponent_GameplayCinematic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsReadyForGameplay = false;
}

void UFortControllerComponent_GameplayCinematic::StartGameplayOutro_Implementation() {
}

void UFortControllerComponent_GameplayCinematic::StartGameplayCinematicOutro() {
}

void UFortControllerComponent_GameplayCinematic::SetReadyForGameplay(bool bIsReady) {
}

void UFortControllerComponent_GameplayCinematic::ServerOnGameplayIntroFinished_Implementation() {
}

void UFortControllerComponent_GameplayCinematic::OnRep_bIsReadyForGameplay() {
}

void UFortControllerComponent_GameplayCinematic::HideHUDElementsForLoadingScreen(const bool bHideElements) {
}

void UFortControllerComponent_GameplayCinematic::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortControllerComponent_GameplayCinematic, bIsReadyForGameplay);
}


