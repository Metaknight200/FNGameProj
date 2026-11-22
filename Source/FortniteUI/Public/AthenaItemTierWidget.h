#pragma once
#include "CoreMinimal.h"
#include "EFortItemTier.h"
#include "AthenaItemElementWidgetBase.h"
#include "AthenaItemTierWidget.generated.h"

class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemTierWidget : public UAthenaItemElementWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_TierPips;
    
public:
    UAthenaItemTierWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemTierUpdated(const EFortItemTier ItemTier);
    
};

