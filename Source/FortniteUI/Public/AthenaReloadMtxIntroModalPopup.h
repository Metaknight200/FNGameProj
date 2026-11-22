#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "AthenaReloadMtxIntroModalPopup.generated.h"

class UCommonButtonLegacy;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaReloadMtxIntroModalPopup : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Confirm;
    
public:
    UAthenaReloadMtxIntroModalPopup();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutro();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTapToClose();
    
    UFUNCTION(BlueprintCallable)
    void HandleConfirmButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void Dismiss();
    
};

