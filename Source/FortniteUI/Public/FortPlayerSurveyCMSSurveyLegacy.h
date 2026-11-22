#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyBase.h"
#include "FortPlayerSurveyConditionsContextLegacy.h"
#include "FortniteGameEditorDelegateStubs.h"
#include "FortniteUIEditorDelegateStubs.h"
#include "FortPlayerSurveyCMSSurveyLegacy.generated.h"

class UFortPlayerSurveyCMSSurveyFactory;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortPlayerSurveyCMSSurveyLegacy : public UFortPlayerSurveyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyCMSSurveyFactory* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerSurveyConditionsContextLegacy ConditionsContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotificationInternalDelegate OnDescriptionChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyBase::FFortPlayerSurveyItemChangedInternalDelegate OnQuestionChangedDelegate;
    
public:
    UFortPlayerSurveyCMSSurveyLegacy();

};

