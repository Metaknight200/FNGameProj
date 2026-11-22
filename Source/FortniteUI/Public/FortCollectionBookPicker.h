#pragma once
#include "CoreMinimal.h"
#include "FortItemManagementMulchPanel.h"
#include "FortItemPickerBase.h"
#include "Templates/SubclassOf.h"
#include "FortCollectionBookPicker.generated.h"

class UFortAccountItem;
class UFortItem;
class UFortMulchConfirmationModalWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookPicker : public UFortItemPickerBase, public IFortItemManagementMulchPanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMulchConfirmationModalWidget> MulchConfirmationModalClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAccountItem* CurrentSlottedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortMulchConfirmationModalWidget* MulchConfirmationModal;
    
public:
    UFortCollectionBookPicker();

    UFUNCTION(BlueprintCallable)
    void ShowMulchDialogForItem(UFortItem* ItemToMulch);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowMulchConfirmationModal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCollectComplete();
    
    UFUNCTION(BlueprintCallable)
    void NotifyPanelDeactivated();
    
    UFUNCTION(BlueprintCallable)
    void NotifyPanelActivated();
    
    UFUNCTION(BlueprintCallable)
    void HideMulchConfirmationModal();
    

    // Fix for true pure virtual functions not being implemented
};

