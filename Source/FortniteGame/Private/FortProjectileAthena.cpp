#include "FortProjectileAthena.h"
#include "EProjectileWaterHitBehavior.h"
#include "Net/UnrealNetwork.h"

AFortProjectileAthena::AFortProjectileAthena(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TouchWaterBehavior = EProjectileWaterHitBehavior::Overlap;
    this->bClientInterpMovement = false;
    this->bExplodeOnPawnHit = false;
    this->bNoCollisionForNonOwningClients = false;
    this->bIgnoreActorsAttachedToFiringPawn = true;
    this->bProcessLocalHits = false;
    this->TimeToWaitForPawnHitBeforeKillOnServer = 4.00f;
    this->PredictedHitActor = NULL;
    this->PredictedHitComp = NULL;
}

void AFortProjectileAthena::ServerNotifyPawnHit_Implementation(FHitResult Hit, int32 Context) {
}
bool AFortProjectileAthena::ServerNotifyPawnHit_Validate(FHitResult Hit, int32 Context) {
    return true;
}

void AFortProjectileAthena::ServerNotifyEndOverlap_Implementation(AActor* OtherActor, UPrimitiveComponent* OtherComp) {
}
bool AFortProjectileAthena::ServerNotifyEndOverlap_Validate(AActor* OtherActor, UPrimitiveComponent* OtherComp) {
    return true;
}




void AFortProjectileAthena::OnRep_PawnHitResult() {
}

void AFortProjectileAthena::OnRep_FireStart() {
}

void AFortProjectileAthena::OnOwnerDestroyed(AActor* DestroyedOwner) {
}

void AFortProjectileAthena::KillAfterNoPawnHit() {
}

void AFortProjectileAthena::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortProjectileAthena, FireStartLoc);
    DOREPLIFETIME(AFortProjectileAthena, PawnHitResult);
}


