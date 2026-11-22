#include "FortAthenaMutator_Bismuth.h"

AFortAthenaMutator_Bismuth::AFortAthenaMutator_Bismuth(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BotData = NULL;
    this->BotTeamStartIndex = 50;
    this->ReflectGameplayEffect = NULL;
    this->InitiateGameplayEffect = NULL;
}

void AFortAthenaMutator_Bismuth::ReflectEliminatePlayer(AFortPlayerPawnAthena* PlayerPawn) {
}

void AFortAthenaMutator_Bismuth::AIBotPawnDeath(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}


