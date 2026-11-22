#include "FortAthenaTutorial_Ambush.h"

AFortAthenaTutorial_Ambush::AFortAthenaTutorial_Ambush(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReachAmbushLocationMarker = NULL;
    this->AmbushTriggerBox = NULL;
    this->HealItemSpawnerBlueprint = NULL;
    this->ShieldItemSpawnerBlueprint = NULL;
    this->BlockerAmbush = NULL;
    this->AmbushDirectionArrows = NULL;
    this->AmbushCameraPoint = NULL;
    this->AISpawnerAttachedTo = NULL;
    this->SpawnedAIPawn = NULL;
    this->AiAccuracyRadius = 90.00f;
    this->AiRateOfFire = 2.00f;
    this->AiFirstShotDamage = 25.00f;
    this->AiDamage = 13.00f;
    this->MaxLocationErrorKeyName = TEXT("MaxLocationError");
    this->MaxLocationErrorValue = 70.00f;
    this->MinLocationErrorKeyName = TEXT("MinLocationError");
    this->MinLocationErrorValue = 50.00f;
    this->BotController = NULL;
    this->AmbushCameraInSpeed = 0.00f;
    this->AmbushCameraOutSpeed = 0.00f;
}


void AFortAthenaTutorial_Ambush::OnBeginOverlapAmbushTriggerBox(AActor* OverlappedActor, AActor* OtherActor) {
}

void AFortAthenaTutorial_Ambush::OnAmbushBotSpawned(AFortPawn* Pawn) {
}

void AFortAthenaTutorial_Ambush::HandleOnPlayerDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortAthenaTutorial_Ambush::HandleOnAIDummyDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}


