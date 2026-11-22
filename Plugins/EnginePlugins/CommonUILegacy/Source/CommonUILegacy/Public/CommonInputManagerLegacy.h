#pragma once
#include "CoreMinimal.h"
#include "CommonActionCompleteSingleDelegate.h"
#include "CommonActionProgressSingleDelegate.h"
#include "CommonInputActionHandlerData.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "Operation.h"
#include "CommonInputManagerLegacy.generated.h"

class ICommonActionHandlerInterface;
class UCommonActionHandlerInterface;
class UCommonActivatablePanelLegacy;
class UCommonGlobalInputHandlerLegacy;

UCLASS(Blueprintable)
class COMMONUILEGACY_API UCommonInputManagerLegacy : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<ICommonActionHandlerInterface> CurrentlyHeldActionInputHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommonActivatablePanelLegacy*> ActivatablePanelStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonGlobalInputHandlerLegacy* GlobalInputHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOperation> Operations;
    
public:
    UCommonInputManagerLegacy();

    UFUNCTION(BlueprintCallable)
    void SuspendStartingOperationProcessing();
    
    UFUNCTION(BlueprintCallable)
    bool StopListeningForExistingHeldAction(const FDataTableRowHandle& InputActionDataRow, const FCommonActionCompleteSingle& CompleteEvent, const FCommonActionProgressSingle& ProgressEvent);
    
    UFUNCTION(BlueprintCallable)
    bool StartListeningForExistingHeldAction(const FDataTableRowHandle& InputActionDataRow, const FCommonActionCompleteSingle& CompleteEvent, const FCommonActionProgressSingle& ProgressEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalInputHandlerPriorityFilter(int32 InFilterPriority);
    
    UFUNCTION(BlueprintCallable)
    void ResumeStartingOperationProcessing();
    
    UFUNCTION(BlueprintCallable)
    void PushActivatablePanel(UCommonActivatablePanelLegacy* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow);
    
    UFUNCTION(BlueprintCallable)
    void PopActivatablePanel(UCommonActivatablePanelLegacy* ActivatablePanel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPanelOnStack(const UCommonActivatablePanelLegacy* InPanel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputSuspended() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonActivatablePanelLegacy* GetTopPanel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGlobalInputHandlerPriorityFilter() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAvailableInputActions(TArray<FCommonInputActionHandlerData>& AvailableInputActions);
    
};

