#include "SynchronizedTeleportPlayerComponent.h"
#include "Net/UnrealNetwork.h"

USynchronizedTeleportPlayerComponent::USynchronizedTeleportPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TeleportScreenMusicCue = NULL;
    this->TeleportScreenFadeoutTime = 3.00f;
    this->bIsServerWaitingForClientToCancelRespawn = false;
}

void USynchronizedTeleportPlayerComponent::ServerRestartRespawn_Implementation() {
}

void USynchronizedTeleportPlayerComponent::OnRep_IsServerWaitingForClientToCancelRespawn() {
}

void USynchronizedTeleportPlayerComponent::OnRep_FadeOutData() {
}

void USynchronizedTeleportPlayerComponent::HandleTeleportScreenStatusChanged(AFortPlayerControllerAthena* PlayerController, bool bEnableLoadScreen, FText HUDReasonText) {
}

void USynchronizedTeleportPlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USynchronizedTeleportPlayerComponent, FadeOutData);
    DOREPLIFETIME(USynchronizedTeleportPlayerComponent, bIsServerWaitingForClientToCancelRespawn);
}


