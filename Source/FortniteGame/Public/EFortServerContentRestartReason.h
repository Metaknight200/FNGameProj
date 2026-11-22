#pragma once
#include "CoreMinimal.h"
#include "EFortServerContentRestartReason.generated.h"

UENUM(BlueprintType)
enum class EFortServerContentRestartReason : uint8 {
    None,
    CreativeCuratedHubChanged,
    CreativeFeaturedIslandsChanged,
    CreativePreloadRevisionChanged = 4,
    CreativePlaylistConditionalFlagsChanged = 8,
    GameFeaturePluginDisabled = 16,
    ForceRestartEventFlagsChanged = 32,
    ForceRestartFlagActiveStateChanged = 64,
};

