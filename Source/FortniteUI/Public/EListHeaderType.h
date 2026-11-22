#pragma once
#include "CoreMinimal.h"
#include "EListHeaderType.generated.h"

UENUM(BlueprintType)
enum class EListHeaderType : uint8 {
    TeamMember,
    PartyMember,
    JoinableParty,
    PlatformOnlineFriend,
    McpOnlineFriend,
    OfflineFriend,
    Blocked,
    FriendInvite,
    SuggestedFriend,
    RecentPlayer,
    SearchResults,
    JoinRequests,
    GameVoice,
    PartyVoice,
    PlatformVoice,
    SidekickVoice,
    Invalid,
};

