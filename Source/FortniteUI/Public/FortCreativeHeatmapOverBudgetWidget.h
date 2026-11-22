#pragma once
#include "CoreMinimal.h"
#include "FortCreativeVolumeWidget.h"
#include "FortCreativeHeatmapOverBudgetWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortCreativeHeatmapOverBudgetWidget : public UFortCreativeVolumeWidget {
    GENERATED_BODY()
public:
    UFortCreativeHeatmapOverBudgetWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHeatmapOverBudgetChanged(const bool bHeatmapOverBudget);
    
};

