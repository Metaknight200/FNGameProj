#include "ProceduralScatterGenerator.h"

UProceduralScatterGenerator::UProceduralScatterGenerator() {
    this->ScatterMethod = EProceduralScatterMethod::Density;
    this->RandomSeed = 42;
    this->NumUniqueSourcePointPatterns = 20;
    this->GridRotation = 0.00f;
    this->bAllScatterPointsBlocking = false;
    this->bLocalDistribution = false;
}


