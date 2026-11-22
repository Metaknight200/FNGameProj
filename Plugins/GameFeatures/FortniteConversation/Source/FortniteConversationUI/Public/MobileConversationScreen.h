#pragma once
#include "CoreMinimal.h"
#include "FortConversationScreen.h"
#include "MobileConversationScreen.generated.h"

class UButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMobileConversationScreen : public UFortConversationScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* MobileButtonConfirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* MobileButtonTouchInformation;
    
public:
    UMobileConversationScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void OnHandleConfirmClicked();
    
};

