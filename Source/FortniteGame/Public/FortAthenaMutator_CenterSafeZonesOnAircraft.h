#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_CenterSafeZonesOnAircraft.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_CenterSafeZonesOnAircraft : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScalableFloat> SafeZoneIndicesToCenter;
    
public:
    AFortAthenaMutator_CenterSafeZonesOnAircraft(const FObjectInitializer& ObjectInitializer);

};

