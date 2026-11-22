#include "FortSprayDecalInstance.h"
#include "Net/UnrealNetwork.h"

AFortSprayDecalInstance::AFortSprayDecalInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPropagatesBounceEffects = false;
    this->bDestroyOnNearbyDestruction = false;
    this->bDestroyOnNearbyDamageTaken = false;
    this->bDestroyOnNearbyBounce = false;
}

void AFortSprayDecalInstance::StartSprayFadeOutDueToNewPlacement_Implementation() {
}

void AFortSprayDecalInstance::SetSprayParameters(AFortPlayerController* SpawningPC, UAthenaSprayItemDefinition* InSprayAsset) {
}


void AFortSprayDecalInstance::OnRep_SprayInfo() {
}


void AFortSprayDecalInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortSprayDecalInstance, SprayInfo);
}


