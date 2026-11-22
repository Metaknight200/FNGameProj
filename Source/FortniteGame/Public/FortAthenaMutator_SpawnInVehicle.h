#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "FortAthenaMutator.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_SpawnInVehicle.generated.h"

class AFortAthenaVehicle;

UCLASS(Blueprintable)
class AFortAthenaMutator_SpawnInVehicle : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortAthenaVehicle> VehicleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlacePawnInVehicleOnLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bSpawnInTeammateVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat VehicleSpawnZOffset;
    
public:
    AFortAthenaMutator_SpawnInVehicle(const FObjectInitializer& ObjectInitializer);

};

