#pragma once
#include "CoreMinimal.h"
#include "FortRadialPickerEntry.h"
#include "FortConversationOption.generated.h"

class UCommonVisibilitySwitcher;
class UFortItem;
class UObject;
class USoundBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortConversationOption : public UFortRadialPickerEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* OnOptionConfirmedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* OnOptionHoveredSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* Switcher_DisplayAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> DefaultSoftTaskIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> DefaultConfirmChoiceSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> DefaultHoverChoiceSound;
    
public:
    UFortConversationOption();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupPivotFromRadialInformation(int32 NumElements, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupFromItemDef(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupFromDisplayAsset(UObject* DisplayAsset);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOptionConfirmed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailable() const;
    
};

