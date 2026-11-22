#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortProgressiveStageList.generated.h"

class UAthenaScrollBox;
class UCommonButtonGroupBase;
class UFortProgressiveStageWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortProgressiveStageList : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupBase* ButtonGroup_StageItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaScrollBox* ScrollBox_StageList;
    
public:
    UFortProgressiveStageList();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearStageWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UFortProgressiveStageWidget* AddStageWidget();
    
};

