#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "EFriendLinkShareButtonType.h"
#include "FortSocialPanelView_FriendLinkButton.generated.h"

class UCommonBorder;

UCLASS(Blueprintable, EditInlineNew)
class UFortSocialPanelView_FriendLinkButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* Border_ScreenTarget;
    
public:
    UFortSocialPanelView_FriendLinkButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShareButtonTypeSet(EFriendLinkShareButtonType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCopiedToClipboard();
    
};

