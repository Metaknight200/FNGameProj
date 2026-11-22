#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortBattlePassTutorialTooltipS17.generated.h"

class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBattlePassTutorialTooltipS17 : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_Tooltip;
    
public:
    UFortBattlePassTutorialTooltipS17();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowTooltip();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetText(FText Text);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideTooltip();
    
};

