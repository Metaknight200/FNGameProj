#pragma once
#include "CoreMinimal.h"
#include "CurieElementAttachConditionHandler.h"
#include "Engine/CurveTable.h"
#include "FortCurieElementAttachConditionHandler.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCurieElementAttachConditionHandler : public UCurieElementAttachConditionHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle ElementMagnitudeToIntensityCurve;
    
public:
    UFortCurieElementAttachConditionHandler();

};

