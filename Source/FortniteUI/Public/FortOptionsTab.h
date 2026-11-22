#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "ESettingTab.h"
#include "OnTabActivatedDelegate.h"
#include "OnTabDeactivatedDelegate.h"
#include "OnTabSettingChangedDelegate.h"
#include "FortOptionsTab.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortOptionsTab : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabSettingChanged OnTabSettingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabActivated OnTabActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabDeactivated OnTabDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESettingTab TabType;
    
public:
    UFortOptionsTab();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOptionsTab();
    
    UFUNCTION(BlueprintCallable)
    void TempNew_UpdateOptionsTab();
    
    UFUNCTION(BlueprintCallable)
    void ResetOptionsToDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControllerDefaultInputType() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAthena();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateTab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CenterOnTab();
    
    UFUNCTION(BlueprintCallable)
    bool AreParentalControlsEnabled();
    
    UFUNCTION(BlueprintCallable)
    void ActivateTab();
    
};

