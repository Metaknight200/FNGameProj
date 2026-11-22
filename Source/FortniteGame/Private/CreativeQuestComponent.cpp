#include "CreativeQuestComponent.h"
#include "Net/UnrealNetwork.h"

UCreativeQuestComponent::UCreativeQuestComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatToTrack = ECreativeQuestStat::Eliminations;
    this->SharingMode = ECreativeQuestSharing::All;
    this->TargetTeam = -1;
    this->TargetClass = -1;
    this->AssignedToTeam = -1;
    this->TargetDeathCause = EDeathCause::Unspecified;
    this->bSelfEliminationsCount = true;
    this->MinigameTargetAmount = 0;
    this->ShowQuestOnHUD = EShowOnHudMode::Both;
    this->ShowProgressMode = EShowProgressMode::Total;
    this->bShowCompleteEffects = true;
    this->QuestAllProgress = 0;
    this->MyMinigame = NULL;
}

void UCreativeQuestComponent::UnregisterQuest() {
}

void UCreativeQuestComponent::SetCurrentAmount(AController* ForPlayer, int32 NewAmount) {
}

void UCreativeQuestComponent::SetActiveFor(AController* Player, bool bNewActive) {
}

void UCreativeQuestComponent::ResetQuestProgress() {
}

void UCreativeQuestComponent::RegisterQuest(AFortMinigame* Minigame) {
}

void UCreativeQuestComponent::OnRep_QuestUpdate() {
}

void UCreativeQuestComponent::OnRep_QuestActive() {
}

bool UCreativeQuestComponent::IsActiveFor(AController* Player) const {
    return false;
}

void UCreativeQuestComponent::HandlePlayerStatChanged() {
}

int32 UCreativeQuestComponent::GetCurrentAmount(AController* ForPlayer) const {
    return 0;
}

TArray<AController*> UCreativeQuestComponent::GetActiveSharedControllers(AController* Instigator) const {
    return TArray<AController*>();
}

void UCreativeQuestComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCreativeQuestComponent, StatToTrack);
    DOREPLIFETIME(UCreativeQuestComponent, SharingMode);
    DOREPLIFETIME(UCreativeQuestComponent, TargetTeam);
    DOREPLIFETIME(UCreativeQuestComponent, TargetClass);
    DOREPLIFETIME(UCreativeQuestComponent, AssignedToTeam);
    DOREPLIFETIME(UCreativeQuestComponent, TargetDeathCause);
    DOREPLIFETIME(UCreativeQuestComponent, bSelfEliminationsCount);
    DOREPLIFETIME(UCreativeQuestComponent, MinigameTargetAmount);
    DOREPLIFETIME(UCreativeQuestComponent, ShowQuestOnHUD);
    DOREPLIFETIME(UCreativeQuestComponent, ShowProgressMode);
    DOREPLIFETIME(UCreativeQuestComponent, bShowCompleteEffects);
    DOREPLIFETIME(UCreativeQuestComponent, QuestIndividualData);
    DOREPLIFETIME(UCreativeQuestComponent, QuestTeamProgress);
    DOREPLIFETIME(UCreativeQuestComponent, QuestAllProgress);
}


