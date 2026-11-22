#include "BuildingGameplayActorSentry.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

ABuildingGameplayActorSentry::ABuildingGameplayActorSentry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->CameraStaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CameraMesh"));
    this->BaseStaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->AngleRaysStaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AngleRaysMesh"));
    this->SpotLightComp = NULL;
    this->bYawLimitWhileTracking = true;
    this->bDoesNotRotate = false;
    this->bLocateDamagerIfHitWhileIdle = true;
    this->CurrentSentryState = EBuildingGameplayActorSentry_State::PassiveIdle;
    this->PawnBeingTracked = NULL;
    this->bIdleRotationStopped = false;
    this->IdleRotationPauseTime = 0.50f;
    this->ReturnToIdlePauseTime = 0.50f;
    this->RotationRate = 5.00f;
    this->ReturnToIdleRotationRate = 20.00f;
    this->TrackingRotationRate = 10.00f;
    this->LocatingDamagerRotationRate = 10.00f;
    this->TrackingAdditionalZLook = 35.00f;
    this->bGoDormantAfterPassiveIdle = true;
    this->bSetRayScaleOnTrackTick = false;
    this->AngleRaysTrackingYScale = 1.00f;
    this->AngleRaysTrackingZScale = 1.00f;
    this->bBaseFollowsTargetRotation = false;
    this->bWasIdleStopped = false;
    this->bIdleRotatingRight = false;
    this->LastNetworkReceiveTime = 0.00f;
    this->DisableTickAfterNoNetworkTrafficTime = 20.00f;
    this->SentryPitchClampMin = -50.00f;
    this->SentryPitchClampMax = 50.00f;
    this->SpotLightRadiusLerpSpeed = 20.00f;
    this->SpotLightOuterConeAngleLerpSpeed = 1.00f;
    this->AngleRaysStaticMeshComp->SetupAttachment(CameraStaticMeshComp);
    this->BaseStaticMeshComp->SetupAttachment(RootComponent);
    this->CameraStaticMeshComp->SetupAttachment(RootComponent);
}


void ABuildingGameplayActorSentry::SetSentryState(EBuildingGameplayActorSentry_State InSentryState) {
}

void ABuildingGameplayActorSentry::SetPawnBeingTracked(AFortPawn* InPawnBeingTracked) {
}




void ABuildingGameplayActorSentry::OnRep_ExactIdleRotation() {
}

void ABuildingGameplayActorSentry::OnRep_CurrentSentryState() {
}


void ABuildingGameplayActorSentry::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingGameplayActorSentry, CurrentSentryState);
    DOREPLIFETIME(ABuildingGameplayActorSentry, PawnBeingTracked);
    DOREPLIFETIME(ABuildingGameplayActorSentry, StartingIdleRotation);
    DOREPLIFETIME(ABuildingGameplayActorSentry, IdleRotationDestination);
    DOREPLIFETIME(ABuildingGameplayActorSentry, ExactIdleRotation);
}


