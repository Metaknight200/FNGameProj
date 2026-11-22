#include "FortCameraTargetPedestal.h"
#include "Components/ChildActorComponent.h"

AFortCameraTargetPedestal::AFortCameraTargetPedestal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("PedestalBase"));
    this->PedestalBaseComponent = (UChildActorComponent*)RootComponent;
    this->CurrentPrimaryItem = NULL;
    this->ItemPreviewActor = NULL;
}




