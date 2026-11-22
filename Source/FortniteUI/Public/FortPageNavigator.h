#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortPageNavigator.generated.h"

class UAthenaScrollBox;
class UCommonButtonGroupLegacy;
class UDynamicEntryBox;
class UFortPageNavigationButton;
class UFortSwipePanel;
class UFortTextButton;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UFortPageNavigator : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPageNavigationButton* Button_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPageNavigationButton* Button_Previous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSwipePanel* SwipePanel_PagesNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaScrollBox* ScrollBox_Pages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VBox_Pages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSnapScrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnapScrollingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_PagesPips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupLegacy* ButtonGroup_PagesPips;
    
public:
    UFortPageNavigator();

    UFUNCTION(BlueprintCallable)
    void SelectPage(const int32 PageIndex, const bool bSkipAnimation);
    
    UFUNCTION(BlueprintCallable)
    void RequestPreviousPage();
    
    UFUNCTION(BlueprintCallable)
    void RequestNextPage();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPipButtonCreated(UFortTextButton* NewPipButton);
    
    UFUNCTION(BlueprintCallable)
    void HandleUserScrolled(float ScrollAmount);
    
    UFUNCTION(BlueprintCallable)
    void HandleScrollCompleted(float ScrollAmount);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearPages();
    
};

