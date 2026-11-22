#include "MoleCinematicComponent.h"

UMoleCinematicComponent::UMoleCinematicComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRoleAssignedTeleport = false;
    this->bVoteDiscussionTeleport = false;
    this->bVotingTeleport = false;
}


