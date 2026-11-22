#pragma once
#include "CoreMinimal.h"
#include "SkyfireOnSquadTeleportToLootRoomTimeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSkyfireOnSquadTeleportToLootRoomTimeChanged, const uint8, SquadId, const float, NewTime);

