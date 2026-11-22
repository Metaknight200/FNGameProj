#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortPlayerSurveyInterpreter.generated.h"

class UCMSContext;
class UFortPlayerSurveyCMSTracker;

UCLASS(Blueprintable)
class UFortPlayerSurveyInterpreter : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCMSContext* CMSContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyCMSTracker* CMSTracker;
    
public:
    UFortPlayerSurveyInterpreter();

};

