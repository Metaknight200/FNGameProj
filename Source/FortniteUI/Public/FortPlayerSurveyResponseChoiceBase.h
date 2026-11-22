#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "EFortPlayerSurveyResponseChoiceType.h"
#include "FortPlayerSurveyResponseChoiceBase.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerSurveyResponseChoiceBase : public UCommonButtonBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Response;
    
public:
    UFortPlayerSurveyResponseChoiceBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChoiceType(EFortPlayerSurveyResponseChoiceType Type);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSurveyResetChoice();
    
};

