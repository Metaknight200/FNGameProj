#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBaseInternalButtonData.h"
#include "FortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo.h"
#include "FortPlayerSurveyMultipleSelectionAnswerWidgetBase.h"
#include "FortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase.generated.h"

class UCommonButtonLegacy;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase : public UFortPlayerSurveyMultipleSelectionAnswerWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBaseInternalButtonData> ButtonWidgets;
    
public:
    UFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SetChoiceButtons(const TArray<UCommonButtonLegacy*>& InButtonWidgets);
    
    UFUNCTION(BlueprintCallable)
    void NativeHandleButtonClicked(UCommonButtonLegacy* AssociatedButton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleFocusChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleButtonClicked(int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo GetFocusInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonButtonLegacy* GetButtonAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindButtonIndex(UCommonButtonLegacy* Button) const;
    
};

