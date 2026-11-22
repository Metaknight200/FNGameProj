#include "FortPhysicsBall.h"
#include "Components/SphereComponent.h"
#include "FortWaterInteractionComponent.h"
#include "Net/UnrealNetwork.h"

AFortPhysicsBall::AFortPhysicsBall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
    this->bDetachRootChildrenOnServer = true;
    this->bUpdateRotationOnlyIfRendered = true;
    this->bRollingAudioFaded = false;
    this->UpdateRollingAudioRangeMeters = 7.00f;
    this->SphereCollision = (USphereComponent*)RootComponent;
    this->RotationPivot = NULL;
    this->WaterInteractionComponent = CreateDefaultSubobject<UFortWaterInteractionComponent>(TEXT("WaterInteractionComponent"));
    this->RotatedComponent = NULL;
    this->RollingAudioComponent = NULL;
    this->bEnableBackspinOnKick = true;
    this->bApplyingBackspin = false;
    this->BackspinRotationScale = 1.00f;
    this->bEnableLiftAndDrag = false;
    this->bStopLiftWhenFalling = true;
    this->bApplyingLift = false;
    this->LiftFactor = 0.00f;
    this->StopLiftHorizontalVelocityThreshold = 500.00f;
    this->StopLiftVerticalVelocityThreshold = 0.00f;
    this->StopLiftTimeDuration = 0.00f;
    this->LiftDuration = 0.00f;
    this->DragVelocityThreshold = 0.00f;
    this->DragFactor = 0.00f;
    this->WaterMinRotationSpeed = 30.00f;
    this->WaterRotationInterpSpeed = 2.00f;
    this->WaterAxisFlipSpeed = 180.00f;
}

void AFortPhysicsBall::UpdateDirectionAndRotation(float DeltaSeconds) {
}


void AFortPhysicsBall::AuthTriggerTargetHit_Implementation(FVector StartPos, FVector EndPos) {
}
bool AFortPhysicsBall::AuthTriggerTargetHit_Validate(FVector StartPos, FVector EndPos) {
    return true;
}

void AFortPhysicsBall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPhysicsBall, bApplyingBackspin);
    DOREPLIFETIME(AFortPhysicsBall, bApplyingLift);
}


