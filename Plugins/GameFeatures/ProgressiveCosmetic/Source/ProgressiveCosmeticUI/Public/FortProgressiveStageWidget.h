#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortProgressiveStageWidget.generated.h"

class UCommonTextBlock;
class UFortProgressiveItemWidget;
class UFortProgressiveStageTags;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortProgressiveStageWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Month;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortProgressiveStageTags* Widget_ProgressiveStageTags;
    
public:
    UFortProgressiveStageWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPeekStateChanged(bool bIsInPeekState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearStageItemWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UFortProgressiveItemWidget* AddStageItemWidget();
    
};

