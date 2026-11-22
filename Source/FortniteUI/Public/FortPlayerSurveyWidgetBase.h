#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "EFortPlayerSurveyQuestionType.h"
#include "Templates/SubclassOf.h"
#include "FortPlayerSurveyWidgetBase.generated.h"

class UCanvasPanel;
class UCommonButtonLegacy;
class UCommonTextBlock;
class UFortPlayerSurveyResponseWidget;
class URichTextBlock;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerSurveyWidgetBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* Text_Question;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_ResponseFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Skip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_NextButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_NextQuestion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Submit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_QuestionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DeselectInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ExitInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortPlayerSurveyQuestionType, TSubclassOf<UFortPlayerSurveyResponseWidget>> ResponseWidgetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<EFortPlayerSurveyQuestionType, UFortPlayerSurveyResponseWidget*> ResponseWidgetInstances;
    
public:
    UFortPlayerSurveyWidgetBase();

};

