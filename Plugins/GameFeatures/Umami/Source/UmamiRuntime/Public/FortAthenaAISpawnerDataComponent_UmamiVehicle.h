#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent_Vehicle.h"
#include "HotfixableUmami3DAgentConfiguration.h"
#include "FortAthenaAISpawnerDataComponent_UmamiVehicle.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_UmamiVehicle : public UFortAthenaAISpawnerDataComponent_Vehicle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHotfixableUmami3DAgentConfiguration Umami3DAgentConfiguration;
    
public:
    UFortAthenaAISpawnerDataComponent_UmamiVehicle();

};

