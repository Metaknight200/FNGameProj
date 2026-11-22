#pragma once
#include "CoreMinimal.h"
#include "EShareButtonType.h"
#include "FortActivatablePanel.h"
#include "FortFriendLinkPanel.generated.h"

class UCommonButtonLegacy;

UCLASS(Blueprintable, EditInlineNew)
class UFortFriendLinkPanel : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_ShareButton;
    
public:
    UFortFriendLinkPanel();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShareButtonTypeSet(EShareButtonType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCopiedToClipboard();
    
};

