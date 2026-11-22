#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "EFortCollectionBookPopupButtonType.h"
#include "FortCollectionBookSlotButton.generated.h"

class UFortCollectionBookSlotWidget;
class UMenuAnchor;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookSlotButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCollectionBookSlotWidget* CollectionBookSlotWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuAnchor* PopupMenuAnchor;
    
public:
    UFortCollectionBookSlotButton();

    UFUNCTION(BlueprintCallable)
    void PopupMenuClosedWithAction(EFortCollectionBookPopupButtonType Selection);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSlottedItemUpdated();
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetPopupMenu();
    
};

