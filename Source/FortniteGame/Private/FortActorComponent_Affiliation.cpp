#include "FortActorComponent_Affiliation.h"
#include "Net/UnrealNetwork.h"

UFortActorComponent_Affiliation::UFortActorComponent_Affiliation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasSpecificRelations = false;
    this->bHasPerceptionUpdateRequest = false;
    this->bIsInGameParticipantFaction = false;
    this->bIsRegisteredToAffiliationSystem = false;
    this->ResetSpecificRelationUnawareDelay = -1.00f;
    this->ResetSpecificRelationNoDamageDelay = 0.00f;
    this->AffiliationUID = 0;
    this->CachedAffiliationManager = NULL;
    this->CachedAIPerceptionComponent = NULL;
    this->CachedBotController = NULL;
    this->bCanBeDamagedByNullInstigator = false;
}

void UFortActorComponent_Affiliation::UpdatePerception() {
}

void UFortActorComponent_Affiliation::SetCanBeDamagedByNullInstigator(const bool bInCanBeDamagedByNullInstigator) {
}

void UFortActorComponent_Affiliation::OnRep_CurrentFactions() {
}

void UFortActorComponent_Affiliation::OnOwnerTeamIndexChanged() {
}

void UFortActorComponent_Affiliation::OnOwnerPawnUnpossessed(APawn* Pawn) {
}

void UFortActorComponent_Affiliation::OnOwnerPawnPossessed(APawn* Pawn) {
}

void UFortActorComponent_Affiliation::OnOwnerPawnDamaged(AActor* DamageOnOwnerPawnDamageddActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void UFortActorComponent_Affiliation::OnBotControllerAlertLevelChanged(AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel) {
}

void UFortActorComponent_Affiliation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortActorComponent_Affiliation, bHasSpecificRelations);
    DOREPLIFETIME(UFortActorComponent_Affiliation, AffiliationUID);
    DOREPLIFETIME(UFortActorComponent_Affiliation, CurrentFactions);
    DOREPLIFETIME(UFortActorComponent_Affiliation, SpecificRelations);
}


