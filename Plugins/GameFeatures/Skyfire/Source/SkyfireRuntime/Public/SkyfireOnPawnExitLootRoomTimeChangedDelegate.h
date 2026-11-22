#pragma once
#include "CoreMinimal.h"
#include "SkyfireOnPawnExitLootRoomTimeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSkyfireOnPawnExitLootRoomTimeChanged, const float, NewTime);

