#include "FortCowVehicle.h"
#include "NiagaraComponent.h"
#include "FortLayeredAudioComponent.h"

AFortCowVehicle::AFortCowVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhysicsAudioComponent = CreateDefaultSubobject<UFortLayeredAudioComponent>(TEXT("CowVehiclePhysicsAudioComponent"));
    this->SpeedLinesNSComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("CowVehicleSpeedLinesNSComponent"));
    this->bIsSquashing = false;
    this->SquashTime = 0.00f;
    this->MaxSquashTime = 0.00f;
    this->CurrentSquash = 0.00f;
    this->TargetSquash = 0.00f;
    this->ErrorToleranceImpactComparison = 0.00f;
    this->SquashSpeed = 8.00f;
    this->CurrentSquashSpeed = 0.00f;
    this->ImpactPointInterp = 0.00f;
    this->ForceNormalized = 0.00f;
    this->ErrorToleranceSpringComparison = 0.00f;
    this->PreviousSpeed = 0.00f;
    this->SquashMID = NULL;
}


