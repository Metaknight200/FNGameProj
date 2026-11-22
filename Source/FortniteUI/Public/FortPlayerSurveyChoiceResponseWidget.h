#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyResponseWidget.h"
#include "FortPlayerSurveyChoiceResponseWidget.generated.h"

class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerSurveyChoiceResponseWidget : public UFortPlayerSurveyResponseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* DynamicEntryBox_Responses;
    
public:
    UFortPlayerSurveyChoiceResponseWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNumberOfResponses(int32 NumberOfResponses);
    
};

