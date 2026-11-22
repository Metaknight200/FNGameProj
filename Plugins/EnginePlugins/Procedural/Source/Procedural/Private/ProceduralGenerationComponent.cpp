#include "ProceduralGenerationComponent.h"

UProceduralGenerationComponent::UProceduralGenerationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Generator = NULL;
    this->bShowDebugVisualization = false;
    this->GenerationVolume = NULL;
    this->GenerationContext = NULL;
}


