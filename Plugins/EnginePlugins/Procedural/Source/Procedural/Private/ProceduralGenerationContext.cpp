#include "ProceduralGenerationContext.h"

UProceduralGenerationContext::UProceduralGenerationContext() {
    this->GeneratorContext = NULL;
}

AVolume* UProceduralGenerationContext::GetGenerationVolume() const {
    return NULL;
}

UProceduralGenerationComponent* UProceduralGenerationContext::GetGenerationComponent() const {
    return NULL;
}


