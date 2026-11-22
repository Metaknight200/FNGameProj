#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "FortExpeditionPickVehicleWidget.generated.h"

class UFortExpeditionItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortExpeditionPickVehicleWidget : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortExpeditionItem> Item;
    
public:
    UFortExpeditionPickVehicleWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetData(UFortExpeditionItem* InItem);
    
};

