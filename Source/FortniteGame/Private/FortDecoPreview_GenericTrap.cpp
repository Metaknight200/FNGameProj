#include "FortDecoPreview_GenericTrap.h"
#include "Components/StaticMeshComponent.h"

AFortDecoPreview_GenericTrap::AFortDecoPreview_GenericTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TrapRangeMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TrapRangeMeshComp0"));
    this->TrapRangeMeshComponent->SetupAttachment(RootComponent);
}


