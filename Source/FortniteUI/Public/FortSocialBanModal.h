#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "FortSocialBanModal.generated.h"

class UCommonButtonLegacy;
class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSocialBanModal : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_CloseModal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_TimeRemaining;
    
public:
    UFortSocialBanModal();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayModeSet(bool bIsBanned);
    
};

