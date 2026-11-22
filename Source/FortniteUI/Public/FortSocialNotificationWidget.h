#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "FortToastWidget.h"
#include "FortSocialNotificationWidget.generated.h"

class UCommonTextBlock;
class UFortKeybindWidget;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSocialNotificationWidget : public UFortToastWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* Action_HoldKeybindWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_NumMutualFriends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RelationshipStatus;
    
public:
    UFortSocialNotificationWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUserStartedHoldActionNotification();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTakeActionNotification();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputModeChanged(ECommonInputType NewInputType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCursorModeChanged(bool bCursorModeEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelNotification();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleInputMethodChanged(ECommonInputType NewInputType);
    
    UFUNCTION(BlueprintCallable)
    void HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CustomWidget);
    
};

