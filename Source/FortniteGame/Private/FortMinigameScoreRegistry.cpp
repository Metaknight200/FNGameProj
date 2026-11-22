#include "FortMinigameScoreRegistry.h"
#include "Net/UnrealNetwork.h"

AFortMinigameScoreRegistry::AFortMinigameScoreRegistry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Playset = NULL;
    this->bPostToKillFeed = true;
}

FText AFortMinigameScoreRegistry::TimeToText(float Time) {
    return FText::GetEmpty();
}

FText AFortMinigameScoreRegistry::ScoreToText_Implementation(float Score) const {
    return FText::GetEmpty();
}

bool AFortMinigameScoreRegistry::RemoveAllScores(AFortPlayerState* PlayerState) {
    return false;
}

bool AFortMinigameScoreRegistry::RecordScore(AFortPlayerState* PlayerState, float Score) {
    return false;
}

FText AFortMinigameScoreRegistry::PointsToText(float Points) {
    return FText::GetEmpty();
}

void AFortMinigameScoreRegistry::OnRep_Scores() {
}

void AFortMinigameScoreRegistry::OnRep_Playset() {
}

bool AFortMinigameScoreRegistry::GetScores(AFortPlayerState* PlayerState, TArray<FMinigameScoreEntry>& ScoreEnties) const {
    return false;
}

bool AFortMinigameScoreRegistry::GetHighScores(TArray<FMinigameScoreEntry>& HighScores) const {
    return false;
}

void AFortMinigameScoreRegistry::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortMinigameScoreRegistry, Playset);
    DOREPLIFETIME(AFortMinigameScoreRegistry, ScoreTemplate);
    DOREPLIFETIME(AFortMinigameScoreRegistry, Scores);
}


