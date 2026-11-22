#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "AthenaItemShopOfferInspectionNavigator.generated.h"

class UCommonButtonLegacy;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemShopOfferInspectionNavigator : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidget* OwningOfferInspectionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Previous;
    
public:
    UAthenaItemShopOfferInspectionNavigator();

    UFUNCTION(BlueprintCallable)
    void SetArrowsEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RequestPreviousOffer();
    
    UFUNCTION(BlueprintCallable)
    void RequestNextOffer();
    
};

