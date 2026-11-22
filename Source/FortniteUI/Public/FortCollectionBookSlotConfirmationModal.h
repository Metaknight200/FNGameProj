#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortCollectionBookSlotConfirmationModal.generated.h"

class UCommonButtonLegacy;
class UCommonTextBlock;
class UFortAccountItem;
class UFortCollectionBookRecycleSlotResultsWidget;
class UFortMultiSizeItemCard;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookSlotConfirmationModal : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAccountItem* CurrentlySlottedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAccountItem* NewItemToSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SlottingDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMultiSizeItemCard* ItemCard_NewlySlottedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCollectionBookRecycleSlotResultsWidget* RecycleSlotResultsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_SlotItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Back;
    
public:
    UFortCollectionBookSlotConfirmationModal();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlotItemRequestedComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlotItemRequested();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSlotItemComplete(const UFortAccountItem* SlottedItem, FName SlotId);
    
};

