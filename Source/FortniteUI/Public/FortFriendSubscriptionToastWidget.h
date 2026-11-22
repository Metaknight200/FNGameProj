#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "FortToastWidget.h"
#include "FortFriendSubscriptionToastWidget.generated.h"

class UCommonButtonLegacy;
class UCommonTextBlock;
class UCommonWidgetSwitcherLegacy;
class UFortKeybindWidget;
class UInputComponent;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UFortFriendSubscriptionToastWidget : public UFortToastWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_SimplePopup;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInputComponent> CachedSubscriptionNudgeInputComponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldDuration;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DebounceHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Nudge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Hold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* Switcher_InputButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* Action_HoldKeybindWidget;
    
public:
    UFortFriendSubscriptionToastWidget();

private:
    UFUNCTION(BlueprintCallable)
    void HandleOpenCloseAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseChanged(EAthenaGamePhase NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CustomWidget);
    
};

