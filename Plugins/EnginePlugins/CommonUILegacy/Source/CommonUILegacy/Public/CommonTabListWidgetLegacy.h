#pragma once
#include "CoreMinimal.h"
#include "CommonTabListWidgetBase.h"
#include "CommonTabListWidgetLegacy.generated.h"

class UCommonButtonBase;
class UCommonButtonLegacy;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class COMMONUILEGACY_API UCommonTabListWidgetLegacy : public UCommonTabListWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTabButtonRemoved, FName, TabId, UCommonButtonLegacy*, TabButton);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTabButtonCreated, FName, TabId, UCommonButtonLegacy*, TabButton);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabButtonCreated OnTabButtonCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabButtonRemoved OnTabButtonRemoved;
    
    UCommonTabListWidgetLegacy();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleTabRemoved(FName TabNameID, UCommonButtonLegacy* TabButton);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleTabCreated(FName TabNameID, UCommonButtonLegacy* TabButton);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnTabButtonRemoved(FName TabId, UCommonButtonBase* TabButton);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnTabButtonCreated(FName TabId, UCommonButtonBase* TabButton);
    
protected:
    UFUNCTION(BlueprintCallable)
    UCommonButtonLegacy* GetTabButtonByID(FName TabNameID);
    
};

