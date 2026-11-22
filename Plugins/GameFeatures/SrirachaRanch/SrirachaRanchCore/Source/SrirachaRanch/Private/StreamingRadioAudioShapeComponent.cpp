#include "StreamingRadioAudioShapeComponent.h"

UStreamingRadioAudioShapeComponent::UStreamingRadioAudioShapeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 1000.00f;
    this->RadioPlayer = NULL;
}


