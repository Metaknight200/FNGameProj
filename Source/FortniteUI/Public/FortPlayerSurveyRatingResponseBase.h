#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyResponseWidget.h"
#include "FortPlayerSurveyRatingResponseBase.generated.h"

class UCommonButtonGroupBase;
class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerSurveyRatingResponseBase : public UFortPlayerSurveyResponseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupBase* ResponseGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* DynamicEntryBox_Responses;
    
public:
    UFortPlayerSurveyRatingResponseBase();

};

