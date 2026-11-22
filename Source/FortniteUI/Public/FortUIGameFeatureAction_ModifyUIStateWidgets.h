#pragma once
#include "CoreMinimal.h"
#include "EFortUIState.h"
#include "FortUIGameFeatureAction.h"
#include "StateWidgetEntry.h"
#include "FortUIGameFeatureAction_ModifyUIStateWidgets.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFortUIGameFeatureAction_ModifyUIStateWidgets : public UFortUIGameFeatureAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortUIState, FStateWidgetEntry> StateWidgetClassOverrides;
    
    UFortUIGameFeatureAction_ModifyUIStateWidgets();

};

