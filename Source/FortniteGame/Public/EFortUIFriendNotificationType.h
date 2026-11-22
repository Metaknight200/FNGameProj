#pragma once
#include "CoreMinimal.h"
#include "EFortUIFriendNotificationType.generated.h"

UENUM(BlueprintType)
enum class EFortUIFriendNotificationType : uint8 {
    Default,
    FriendRequest,
    PartyInviteSent,
    PartyInvite,
    InviteFriendToParty,
    PartyRequest,
    AutoImportFriendSuggestion,
    PartyMemberCreated,
};

