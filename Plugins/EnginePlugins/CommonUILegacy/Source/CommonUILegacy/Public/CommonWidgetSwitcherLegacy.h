#pragma once
#include "CoreMinimal.h"
#include "CommonAnimatedSwitcher.h"
#include "OnActiveWidgetChangedDelegate.h"
#include "OnActiveWidgetDeactivatedDelegate.h"
#include "CommonWidgetSwitcherLegacy.generated.h"

class UCommonActivatablePanelLegacy;
class UWidget;

UCLASS(Blueprintable)
class COMMONUILEGACY_API UCommonWidgetSwitcherLegacy : public UCommonAnimatedSwitcher {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveWidgetDeactivated OnActiveWidgetDeactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveWidgetChanged OnActiveWidgetChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWidgetActivationEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutroPanelBelow;
    
public:
    UCommonWidgetSwitcherLegacy();

    UFUNCTION(BlueprintCallable)
    void SetActiveWidgetIndex_Advanced(const int32 Index, const bool AttemptActivationChange);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveWidget_Advanced(UWidget* Widget, const bool AttemptActivationChange);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleActiveWidgetDeactivated(UCommonActivatablePanelLegacy* DeactivatedPanel);
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateWidget();
    
    UFUNCTION(BlueprintCallable)
    void ActivateWidget();
    
};

