#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "Types/SlateEnums.h"
#include "FortFriendSearchButton.generated.h"

class UCommonRichTextBlock;
class UCommonWidgetSwitcherLegacy;
class UEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortFriendSearchButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_AddFriend;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_SocialBanTimerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_ClearQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_SubmitQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* Switcher_SocialBan;
    
public:
    UFortFriendSearchButton();

protected:
    UFUNCTION(BlueprintCallable)
    void SetKeyboardFocusOnAddFriendText();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleAddFriendTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void HandleAddFriendTextChanged(const FText& Text);
    
};

