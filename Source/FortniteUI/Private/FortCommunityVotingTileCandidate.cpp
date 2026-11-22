#include "FortCommunityVotingTileCandidate.h"

UFortCommunityVotingTileCandidate::UFortCommunityVotingTileCandidate() : UUserWidget(FObjectInitializer::Get()) {
    this->Image_Candidate = NULL;
    this->LoadGuard = NULL;
}

void UFortCommunityVotingTileCandidate::OnImageAnimationFinished() {
}



