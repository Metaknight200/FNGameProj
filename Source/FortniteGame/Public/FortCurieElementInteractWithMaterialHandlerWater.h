#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "FortCurieElementInteractWithMaterialHandler.h"
#include "FortCurieElementInteractWithMaterialHandlerWater.generated.h"

UCLASS(Blueprintable)
class UFortCurieElementInteractWithMaterialHandlerWater : public UFortCurieElementInteractWithMaterialHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle WaterMagnitudeToWaterContentIncreaseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle WaterMagnitudeToWaterContentIncreaseRateCurve;
    
public:
    UFortCurieElementInteractWithMaterialHandlerWater();

};

