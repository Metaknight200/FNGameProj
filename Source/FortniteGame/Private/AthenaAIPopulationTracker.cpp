#include "AthenaAIPopulationTracker.h"

UAthenaAIPopulationTracker::UAthenaAIPopulationTracker() {
    this->CachedGameMode = NULL;
}

void UAthenaAIPopulationTracker::OnFortPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void UAthenaAIPopulationTracker::OnAISpawned(APawn* Pawn, const int32 RequestID) {
}

void UAthenaAIPopulationTracker::OnAgentGameOver(AFortAthenaAIBotController* AIBotController, AFortPawn* Pawn) {
}

int32 UAthenaAIPopulationTracker::GetNumTotalBots() const {
    return 0;
}

int32 UAthenaAIPopulationTracker::GetNumPlayerBots() const {
    return 0;
}

int32 UAthenaAIPopulationTracker::GetNumNonAthenaParticipantBots() const {
    return 0;
}

int32 UAthenaAIPopulationTracker::GetNumAIPawn() const {
    return 0;
}

FAIPopulationCountSnapshot UAthenaAIPopulationTracker::GetAIPopulationTrackerCount() const {
    return FAIPopulationCountSnapshot{};
}

TArray<AController*> UAthenaAIPopulationTracker::GetAIMatchingQuery(const FGameplayTagQuery& TagQuery) const {
    return TArray<AController*>();
}


