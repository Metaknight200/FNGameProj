#pragma once
#include "CoreMinimal.h"
#include "SkyfireOnSquadMemberMothershipStatusChangedDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSkyfireOnSquadMemberMothershipStatusChanged, const AFortPlayerStateAthena*, SquadMemberPlayerState, const bool, bIsOnMothership);

