#include "FortFlag.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"

AFortFlag::AFortFlag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule0"));
    this->FlagMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlagMeshComp0"));
    this->CollisionComp = (UCapsuleComponent*)RootComponent;
    this->FlagMeshComp->SetupAttachment(RootComponent);
}


