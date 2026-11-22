#include "FortCreativeStormShield.h"
#include "Net/UnrealNetwork.h"

AFortCreativeStormShield::AFortCreativeStormShield(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsViewTargetPawnOutside = false;
    this->GamePhaseStep = EAthenaGamePhaseStep::None;
    this->NextTargetRadius = 0.00f;
    this->NextNextTargetRadius = 0.00f;
    this->InstancedServerTime = 0.00f;
    this->StartWaitTime = 0.00f;
    this->StartShrinkTime = 0.00f;
    this->FinishShrinkTime = 0.00f;
    this->FinishDestroyTime = -1.00f;
    this->AudioLowPassValue = 0.00f;
    this->AudioPitchMod = 0.00f;
    this->AudioCrossfade = 0.00f;
    this->MovementAudioCrossfadeCurve = NULL;
    this->MovementAudioPitchModCurve = NULL;
    this->ClockTickingAudioVolumeCurve = NULL;
    this->ClockTickingAudioPitchCurve = NULL;
    this->ShieldBoundaryAudio = NULL;
    this->HoldingAudio = NULL;
    this->HoldingTickAudio = NULL;
    this->SpawnVolume = NULL;
}

void AFortCreativeStormShield::SetGamePhaseStep(const EAthenaGamePhaseStep NewGamePhaseStep) {
}

void AFortCreativeStormShield::OnRep_GamePhaseStep() {
}

void AFortCreativeStormShield::OnGamePhaseStepChanged() {
}

float AFortCreativeStormShield::GetServerTime() const {
    return 0.0f;
}



void AFortCreativeStormShield::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortCreativeStormShield, GamePhaseStep);
    DOREPLIFETIME(AFortCreativeStormShield, NextTargetRadius);
    DOREPLIFETIME(AFortCreativeStormShield, NextTargetLocation);
    DOREPLIFETIME(AFortCreativeStormShield, NextNextTargetRadius);
    DOREPLIFETIME(AFortCreativeStormShield, NextNextTargetLocation);
    DOREPLIFETIME(AFortCreativeStormShield, InstancedServerTime);
}


