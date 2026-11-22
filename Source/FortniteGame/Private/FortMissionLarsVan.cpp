#include "FortMissionLarsVan.h"
#include "Components/ArrowComponent.h"
#include "Components/InterpToMovementComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "FortCameraMode_AthenaAircraft.h"

AFortMissionLarsVan::AFortMissionLarsVan(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->CameraModeClass = UFortCameraMode_AthenaAircraft::StaticClass();
    this->Root = (USceneComponent*)RootComponent;
    this->Van = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Van"));
    this->VanApparatus = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Van Apparatus"));
    this->VanBalloon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Van Balloon"));
    this->VanFlames = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Van Flames"));
    this->Stool = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Stool"));
    this->Lars = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Lars"));
    this->Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Jump Transform"));
    this->VanMovement = CreateDefaultSubobject<UInterpToMovementComponent>(TEXT("Movment"));
    this->Arrow->SetupAttachment(RootComponent);
    this->Lars->SetupAttachment(RootComponent);
    this->Stool->SetupAttachment(RootComponent);
    this->Van->SetupAttachment(RootComponent);
    this->VanApparatus->SetupAttachment(RootComponent);
    this->VanBalloon->SetupAttachment(RootComponent);
    this->VanFlames->SetupAttachment(RootComponent);
}

void AFortMissionLarsVan::SetPlayerWaitingToJump(AFortPlayerPawn* Waiting) {
}


