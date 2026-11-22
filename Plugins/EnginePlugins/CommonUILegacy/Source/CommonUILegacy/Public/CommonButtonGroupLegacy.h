#pragma once
#include "CoreMinimal.h"
#include "CommonButtonGroupBase.h"
#include "SimpleButtonGroupDelegateDelegate.h"
#include "CommonButtonGroupLegacy.generated.h"

class UCommonButtonBase;
class UCommonButtonGroupLegacy;
class UCommonButtonLegacy;
class UObject;

UCLASS(Blueprintable)
class COMMONUILEGACY_API UCommonButtonGroupLegacy : public UCommonButtonGroupBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleButtonGroupDelegate OnSelectedButtonChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleButtonGroupDelegate OnHoveredButtonChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleButtonGroupDelegate OnButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleButtonGroupDelegate OnButtonDoubleClicked;
    
    UCommonButtonGroupLegacy();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectionStateChanged(UCommonButtonLegacy* BaseButton, bool bIsSelected);
    
    UFUNCTION(BlueprintCallable)
    void OnHandleButtonDoubleClicked(UCommonButtonLegacy* BaseButton);
    
    UFUNCTION(BlueprintCallable)
    void OnHandleButtonClicked(UCommonButtonLegacy* BaseButton);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonUnhovered(UCommonButtonLegacy* BaseButton);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonHovered(UCommonButtonLegacy* BaseButton);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnSelectedButtonChanged(UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnHoveredButtonChanged(UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnButtonDoubleClicked(UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnButtonClicked(UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleNativeOnSelectedButtonChanged(UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleNativeOnHoveredButtonChanged(UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleNativeOnButtonDoubleClicked(UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleNativeOnButtonClicked(UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonButtonLegacy* GetSelectedButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonButtonLegacy* GetButtonAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    static UCommonButtonGroupLegacy* CreateButtonGroup(UObject* ContextObject, bool bInSelectionRequired);
    
};

