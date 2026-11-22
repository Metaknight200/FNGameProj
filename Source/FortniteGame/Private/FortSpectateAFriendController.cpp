#include "FortSpectateAFriendController.h"
#include "Net/UnrealNetwork.h"

AFortSpectateAFriendController::AFortSpectateAFriendController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->CameraModeCycle.AddDefaulted(1);
    this->ThirdPersonPawnBaseClass = NULL;
    this->HoverDronePawnClass = NULL;
    this->SavedCameraStates.AddDefaulted(9);
    this->PlayerJoinedOn = NULL;
    this->HasValidTarget = false;
    this->TeamToFollow = 0;
    this->FollowAnyTeam = false;
    this->TeamJoinedOnPlacement = 0;
    this->TeamJoinedOn = NULL;
    this->FollowAnyTeamAfterFirst = false;
    this->StartingDiconnectTimerLength = 120.00f;
    this->InvalidTargetDiconnectTimerLength = 15.00f;
}

void AFortSpectateAFriendController::OnRep_TeamToFollow() {
}

void AFortSpectateAFriendController::OnRep_TeamJoinedOnPlacement() {
}

void AFortSpectateAFriendController::OnRep_PlayerJoinedOn() {
}

void AFortSpectateAFriendController::OnRep_HasValidTarget() {
}

void AFortSpectateAFriendController::OnRep_FollowAnyTeam() {
}

void AFortSpectateAFriendController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortSpectateAFriendController, PlayerJoinedOn);
    DOREPLIFETIME(AFortSpectateAFriendController, HasValidTarget);
    DOREPLIFETIME(AFortSpectateAFriendController, TeamToFollow);
    DOREPLIFETIME(AFortSpectateAFriendController, FollowAnyTeam);
    DOREPLIFETIME(AFortSpectateAFriendController, TeamJoinedOnPlacement);
}


