#pragma once
#include "CoreMinimal.h"
#include "CurieElementInteractWithElementHandler.h"
#include "Engine/CurveTable.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "FortCurieElementInteractWithElementHandler.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCurieElementInteractWithElementHandler : public UCurieElementInteractWithElementHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InteractingElementTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InteractMagnitudeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle ElementMagnitudeToIntensityDecreaseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle ElementMagnitudeToIntensityDecayRateCurve;
    
public:
    UFortCurieElementInteractWithElementHandler();

};

