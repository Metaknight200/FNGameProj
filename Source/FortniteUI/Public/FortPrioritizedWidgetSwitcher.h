#pragma once
#include "CoreMinimal.h"
#include "CommonWidgetSwitcherLegacy.h"
#include "FortPrioritizedWidgetSwitcher.generated.h"

UCLASS(Blueprintable)
class UFortPrioritizedWidgetSwitcher : public UCommonWidgetSwitcherLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachingTime;
    
public:
    UFortPrioritizedWidgetSwitcher();

};

