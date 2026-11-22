#pragma once
#include "CoreMinimal.h"
#include "AthenaFullScreenMapPanel.h"
#include "AthenaFullScreenQuestMapPanel.generated.h"

class UAthenaFullScreenMapControlsWidget;
class UAthenaMapGamePanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaFullScreenQuestMapPanel : public UAthenaFullScreenMapPanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMapGamePanel* QuestPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaFullScreenMapControlsWidget* ControlsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapZoomOverride;
    
public:
    UAthenaFullScreenQuestMapPanel();

private:
    UFUNCTION(BlueprintCallable)
    void HandleSortTypeTextChanged(const FText& TypeText);
    
    UFUNCTION(BlueprintCallable)
    void HandleRemoveSelectedQuestButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleControlsSortButtonClicked();
    
};

