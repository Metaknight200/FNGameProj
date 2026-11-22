#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "FortCurieElementInteractWithMaterialHandler.h"
#include "FortCurieElementInteractWithMaterialHandlerFire.generated.h"

UCLASS(Blueprintable)
class UFortCurieElementInteractWithMaterialHandlerFire : public UFortCurieElementInteractWithMaterialHandler {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle FireMagnitudeToWaterContentDecreaseCurve;
    
public:
    UFortCurieElementInteractWithMaterialHandlerFire();

};

