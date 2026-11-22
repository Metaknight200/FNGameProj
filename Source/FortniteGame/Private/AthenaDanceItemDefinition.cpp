#include "AthenaDanceItemDefinition.h"
#include "EFortItemType.h"

UAthenaDanceItemDefinition::UAthenaDanceItemDefinition() {
    this->ItemType = EFortItemType::AthenaDance;
    this->bHolsterWeapon = true;
    this->bUsesSecondaryFireInput = false;
    this->bMovingEmote = false;
    this->bMovingEmoteSkipLandingFX = false;
    this->bMoveForwardOnly = false;
    this->bMoveFollowingOnly = false;
    this->bGroupEmote = false;
    this->bUseHighPreviewCamera = false;
    this->bGroupAnimationSync = false;
    this->WalkForwardSpeed = 300.00f;
    this->GroupSyncAnimOffset = 0.00f;
    this->GroupEmoteToStartLeader = NULL;
    this->GroupEmoteToStartFollower = NULL;
    this->GroupEmoteToStartLeaderIfBothOwn = NULL;
    this->GroupEmoteToStartFollowerIfBothOwn = NULL;
    this->GroupEmotePositionOffsetTolerance = 15.00f;
    this->GroupEmoteFollowDistance = 120.00f;
    this->bLockGroupEmoteLeaderRotation = false;
    this->GroupEmoteLeaderRotationYawOffset = 0.00f;
    this->GroupEmoteFollowerRotationYawOffset = 0.00f;
}

FText UAthenaDanceItemDefinition::GetChatTriggerCommandName() const {
    return FText::GetEmpty();
}


