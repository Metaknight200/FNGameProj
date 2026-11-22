#include "ProceduralGenerationVolume.h"
#include "ProceduralGenerationComponent.h"

AProceduralGenerationVolume::AProceduralGenerationVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProceduralComponent = CreateDefaultSubobject<UProceduralGenerationComponent>(TEXT("ProceduralGenerationComponent"));
}

void AProceduralGenerationVolume::Generate() {
}

void AProceduralGenerationVolume::ClearGeneratedContent() {
}


