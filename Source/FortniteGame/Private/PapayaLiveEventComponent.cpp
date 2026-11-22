#include "PapayaLiveEventComponent.h"

UPapayaLiveEventComponent::UPapayaLiveEventComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bSubscribeToMeshNetwork = true;
}


