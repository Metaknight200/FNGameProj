#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "AthenaFullScreenMapControlsWidget.generated.h"

class UCommonButtonLegacy;
class UCommonTextBlock;
class USizeBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaFullScreenMapControlsWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_ToggleQuestIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_ResetToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Exit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PlaceMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PlaceMarkerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RemoveMarkerText;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_PlaceMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_SortToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_RemoveSelectedQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_RemoveSelectedQuest;
    
public:
    UAthenaFullScreenMapControlsWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSortTypeTextChanged(const FText& TypeText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleToggleQuestIconsClicked();
    
};

