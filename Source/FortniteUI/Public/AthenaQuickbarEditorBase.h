#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortQuickBars.h"
#include "Templates/SubclassOf.h"
#include "AthenaQuickbarEditorBase.generated.h"

class UAthenaQuickBarSlotButtonBase;
class UCommonButtonGroupBase;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaQuickbarEditorBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupBase* EquipButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckVisibilityBasedOffInventoryCapacity;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuickBars QuickbarIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaQuickBarSlotButtonBase> QuickBarSlotButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstQuickBarSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumQuickBarSlots;
    
public:
    UAthenaQuickbarEditorBase();

    UFUNCTION(BlueprintCallable)
    void SelectPreviousQuickBarSlot(const bool bSetFocus);
    
    UFUNCTION(BlueprintCallable)
    void SelectNextQuickBarSlot(const bool bSetFocus);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuickBarSlotButtonCreated(UAthenaQuickBarSlotButtonBase* QuickBarSlotButton);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetFirstEquipSlotButton() const;
    
};

