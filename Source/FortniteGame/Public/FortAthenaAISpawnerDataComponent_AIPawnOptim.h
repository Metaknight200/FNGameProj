#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent_OptimBase.h"
#include "FortAthenaAISpawnerDataComponent_AIPawnOptim.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_AIPawnOptim : public UFortAthenaAISpawnerDataComponent_OptimBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRegisterToAIDropper: 1;
    
public:
    UFortAthenaAISpawnerDataComponent_AIPawnOptim();

};

