#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAthenaAIRuntimeParametersProvider.h"
#include "FortAthenaAISpawnerDataComponent.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UFortAthenaAISpawnerDataComponent : public UObject, public IFortAthenaAIRuntimeParametersProvider {
    GENERATED_BODY()
public:
    UFortAthenaAISpawnerDataComponent();


    // Fix for true pure virtual functions not being implemented
};

