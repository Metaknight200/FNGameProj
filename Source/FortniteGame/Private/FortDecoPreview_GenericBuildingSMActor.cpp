#include "FortDecoPreview_GenericBuildingSMActor.h"
#include "Components/StaticMeshComponent.h"

AFortDecoPreview_GenericBuildingSMActor::AFortDecoPreview_GenericBuildingSMActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PrimaryMeshComp0"));
    this->PrimaryMeshComponent = (UStaticMeshComponent*)RootComponent;
}


