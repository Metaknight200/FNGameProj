#include "FortSafeZoneIndicator.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AFortSafeZoneIndicator::AFortSafeZoneIndicator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->MinimapComp = NULL;
    this->LastRadius = 0.00f;
    this->NextRadius = 0.00f;
    this->NextNextRadius = 0.00f;
    this->bSafezoneEventDriven = false;
    this->bPaused = false;
    this->bPausedForPreview = false;
    this->bPausedForPreview_Previous = false;
    this->NextNextMegaStormGridCellThickness = 0;
    this->NextMegaStormGridCellThickness = 0;
    this->MegaStormDelayTimeBeforeDestruction = 0.00f;
    this->NumActiveMegaStormCircles = 0;
    this->ActiveMegaStormCircleGridCellCountFromEdge = 0;
    this->SafeZoneHeight = -1.00f;
    this->SafeZoneStartShrinkTime = 0.00f;
    this->SafeZoneFinishShrinkTime = 0.00f;
    this->Radius = 0.00f;
    this->SafeZoneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SafeZoneMesh"));
    this->MovementAudioCrossfadeCurve = NULL;
    this->MovementAudioPitchModCurve = NULL;
    this->ClockTickingAudioVolumeCurve = NULL;
    this->ClockTickingAudioPitchCurve = NULL;
    this->AudioDopplerInterpSpeed = 0.00f;
    this->MaterialCollection = NULL;
    this->SafeZoneWorldScale = 3700.00f;
    this->bIsViewTargetPawnOutside = false;
    this->MegaStormFXAlphaFactor = 0.00f;
    this->MegaStormFXFadeInTime = 1.00f;
    this->MegaStormFXFadeOutTime = 1.00f;
    this->bMegaStormGameplayCueStarted = false;
    this->bMegaStormStopPending = false;
    this->bCleanupFXWithAlphaFactor = false;
    this->MegaStormOneOverFXFadeInTime = 0.00f;
    this->MegaStormOneOverFXFadeOutTime = 0.00f;
    this->ShieldBoundaryAudio = NULL;
    this->HoldingAudio = NULL;
    this->HoldingTickAudio = NULL;
    this->bMegastormAudioActive = false;
    this->AudioLowPassValue = 0.00f;
    this->AudioPitchMod = 0.00f;
    this->AudioCrossfade = 0.00f;
    this->MegastormAudioIntensity = 0.00f;
    this->HoldingStartTime = 0.00f;
    this->TimeRemainingWhenPhasePaused = -1.00f;
    this->ForceUpdateCount = 0;
    this->FutureReplicator = NULL;
    this->SafeZoneMesh->SetupAttachment(RootComponent);
}

void AFortSafeZoneIndicator::SetSafeZoneRadiusAndCenter(float InRadius, FVector InLocation) {
}

void AFortSafeZoneIndicator::SetSafeZoneHeight(float NewWaterHeight) {
}


void AFortSafeZoneIndicator::OnRep_NumActiveMegaStormCircles(int32 PrevNumActiveMegaStormCircles) {
}




void AFortSafeZoneIndicator::OnBeginStartingStateEffects() {
}

void AFortSafeZoneIndicator::MegaStormMinTimerExpired() {
}

float AFortSafeZoneIndicator::GetTimeSinceSafeZonesStart() const {
    return 0.0f;
}

float AFortSafeZoneIndicator::GetSafeZoneStartShrinkTime() const {
    return 0.0f;
}

float AFortSafeZoneIndicator::GetSafeZoneShrinkSpeedRelativeTo(float DistanceToTravel) {
    return 0.0f;
}

float AFortSafeZoneIndicator::GetSafeZoneShrinkSpeed() {
    return 0.0f;
}

float AFortSafeZoneIndicator::GetSafeZoneRadius() const {
    return 0.0f;
}

float AFortSafeZoneIndicator::GetSafeZoneFinishShrinkTime() const {
    return 0.0f;
}

FVector AFortSafeZoneIndicator::GetSafeZoneCenter() const {
    return FVector{};
}

void AFortSafeZoneIndicator::GetMovementAudioCurveValues(float Time, float& CrossfadeValue, float& PitchModValue) const {
}

void AFortSafeZoneIndicator::GetClockTickingAudioCurveValues(float Time, float& VolumeModValue, float& PitchModValue) const {
}

void AFortSafeZoneIndicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortSafeZoneIndicator, LastRadius);
    DOREPLIFETIME(AFortSafeZoneIndicator, NextRadius);
    DOREPLIFETIME(AFortSafeZoneIndicator, LastCenter);
    DOREPLIFETIME(AFortSafeZoneIndicator, NextCenter);
    DOREPLIFETIME(AFortSafeZoneIndicator, bSafezoneEventDriven);
    DOREPLIFETIME(AFortSafeZoneIndicator, bPaused);
    DOREPLIFETIME(AFortSafeZoneIndicator, bPausedForPreview);
    DOREPLIFETIME(AFortSafeZoneIndicator, NextNextMegaStormGridCellThickness);
    DOREPLIFETIME(AFortSafeZoneIndicator, NextMegaStormGridCellThickness);
    DOREPLIFETIME(AFortSafeZoneIndicator, MegaStormDelayTimeBeforeDestruction);
    DOREPLIFETIME(AFortSafeZoneIndicator, NumActiveMegaStormCircles);
    DOREPLIFETIME(AFortSafeZoneIndicator, ActiveMegaStormCircleGridCellCountFromEdge);
    DOREPLIFETIME(AFortSafeZoneIndicator, SafeZoneStartShrinkTime);
    DOREPLIFETIME(AFortSafeZoneIndicator, SafeZoneFinishShrinkTime);
    DOREPLIFETIME(AFortSafeZoneIndicator, Radius);
    DOREPLIFETIME(AFortSafeZoneIndicator, TimeRemainingWhenPhasePaused);
    DOREPLIFETIME(AFortSafeZoneIndicator, ForceUpdateCount);
}


