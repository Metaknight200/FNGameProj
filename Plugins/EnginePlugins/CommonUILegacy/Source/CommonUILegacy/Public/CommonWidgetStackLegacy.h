#pragma once
#include "CoreMinimal.h"
#include "CommonVisibilitySwitcher.h"
#include "CommonWidgetStackLegacy.generated.h"

class UWidget;

UCLASS(Blueprintable, DefaultConfig, Config=CommonUI)
class COMMONUILEGACY_API UCommonWidgetStackLegacy : public UCommonVisibilitySwitcher {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActiveWidgetChangedLegacy, UWidget*, InActiveWidget, int32, InActiveWidgetIndex);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveWidgetChangedLegacy OnActiveWidgetChangedLegacyEvent;
    
public:
    UCommonWidgetStackLegacy();

    UFUNCTION(BlueprintCallable)
    void PushWidget(UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    UWidget* PopWidget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeactivateWidget();
    
    UFUNCTION(BlueprintCallable)
    void ActivateWidget();
    
};

