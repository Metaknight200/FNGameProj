#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "FortToastWidget.h"
#include "FortVoiceChannelChangePopup.generated.h"

class UCommonButtonLegacy;
class UCommonRichTextBlock;
class UCommonWidgetSwitcherLegacy;
class UFortKeybindWidget;
class UInputComponent;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UFortVoiceChannelChangePopup : public UFortToastWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableVoiceChatNotifyEverySession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToastMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisiblityInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GameChannelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PartyChannelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText JustJoinedChannelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StayedInChannelText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInputComponent> CachedGameChannelRecommendationInputComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_SimplePopup;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_TopLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_MiddleLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_BottomLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* ActionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_JoinGameChat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* Switcher_InputButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* HoldKeybindWidget_Keyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* HoldKeybindWidget_GamePad;
    
public:
    UFortVoiceChannelChangePopup();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputModeChanged(ECommonInputType NewInputType);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOpenCloseAnimationFinished();
    
};

