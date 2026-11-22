#pragma once
#include "CoreMinimal.h"
#include "BuildingWeakSpotData.h"
#include "ShouldKillWeakSpotDynamicDelegate.generated.h"

class UFortWeakPointComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FShouldKillWeakSpotDynamic, const UFortWeakPointComponent*, WeakPointComponent, const FBuildingWeakSpotData&, WeakSpotData);

