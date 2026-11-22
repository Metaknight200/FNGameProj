#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "FortHUDShutdownTimerInterface.h"
#include "FortWebPurchaseScreen.generated.h"

class UPanelWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortWebPurchaseScreen : public UCommonActivatablePanelLegacy, public IFortHUDShutdownTimerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* WebContent;
    
public:
    UFortWebPurchaseScreen();

    UFUNCTION(BlueprintCallable)
    void Display(UWidget* WebWidget);
    
    UFUNCTION(BlueprintCallable)
    void Dismiss();
    

    // Fix for true pure virtual functions not being implemented
};

