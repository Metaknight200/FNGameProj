#pragma once
#include "CoreMinimal.h"
#include "SimpleMetricInformation.h"
#include "FortCreativeVolumeWidget.h"
#include "FortCreativeSimplePlayerMetricInformationWidget.generated.h"

class APlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UFortCreativeSimplePlayerMetricInformationWidget : public UFortCreativeVolumeWidget {
    GENERATED_BODY()
public:
    UFortCreativeSimplePlayerMetricInformationWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSimplePlayerMetricInformationUpdated(APlayerState* PlayerState, const FSimpleMetricInformation& SimpleMetricInformation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSimplePlayerMetricInformationUpdated(const FSimpleMetricInformation& SimpleMetricInformation);
    
};

