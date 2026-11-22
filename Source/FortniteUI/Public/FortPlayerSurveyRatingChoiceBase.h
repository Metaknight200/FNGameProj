#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "FortPlayerSurveyRatingChoiceBase.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerSurveyRatingChoiceBase : public UCommonButtonBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RatingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Label;
    
public:
    UFortPlayerSurveyRatingChoiceBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSurveyResetChoice();
    
};

