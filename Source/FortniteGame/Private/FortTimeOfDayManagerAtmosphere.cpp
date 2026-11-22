#include "FortTimeOfDayManagerAtmosphere.h"
#include "Components/SkyAtmosphereComponent.h"

AFortTimeOfDayManagerAtmosphere::AFortTimeOfDayManagerAtmosphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkyAtmosphereComponent = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("SkyAtmosphereComponent"));
    this->SkyAtmosphereComponent->SetupAttachment(RootComponent);
}


