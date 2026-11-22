#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "Engine/DataTable.h"
#include "AthenaMapPanel.generated.h"

class UAthenaMapGamePanel;
class UAthenaMapLayerContainer;
class USizeBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaMapPanel : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMapGamePanel* GamePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMapLayerContainer* MapLayerContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBoxChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Athena_MapInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CloseMapPanelInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleMapCursorInputAction;
    
public:
    UAthenaMapPanel();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeViewMode(bool bChallengesFocusedMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeViewMode(bool bChallengesFocusedMode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowChallengePins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleShowChallengePinsChanged(bool bInShowChallengePins);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleMapCursorToggled(bool bShowingMapCursor);
    
};

