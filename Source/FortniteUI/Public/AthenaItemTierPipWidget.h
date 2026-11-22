#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortItemTier.h"
#include "AthenaItemTierPipWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemTierPipWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UAthenaItemTierPipWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemTierSet(const EFortItemTier ItemTier);
    
};

