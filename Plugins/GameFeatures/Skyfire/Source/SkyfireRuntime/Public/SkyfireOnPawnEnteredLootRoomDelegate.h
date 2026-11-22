#pragma once
#include "CoreMinimal.h"
#include "SkyfireOnPawnEnteredLootRoomDelegate.generated.h"

class USkyfirePlayerPawnComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSkyfireOnPawnEnteredLootRoom, USkyfirePlayerPawnComponent*, SkyfirePawnComponent);

