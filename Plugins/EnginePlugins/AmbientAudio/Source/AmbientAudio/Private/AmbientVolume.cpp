#include "AmbientVolume.h"
#include "Net/UnrealNetwork.h"

AAmbientVolume::AAmbientVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AmbientAsset = NULL;
    this->Priority = 0;
    this->CrossfadeTime = 10.00f;
    this->bEnabled = true;
    this->bGlobal = false;
}

void AAmbientVolume::SetPriority(int32 NewPriority) {
}

void AAmbientVolume::SetEnabled(bool bNewEnabled) {
}

void AAmbientVolume::SetCrossfadeTime(float NewCrossfadeTime) {
}

void AAmbientVolume::SetAmbientAsset(UAmbientAudioDataAsset* NewAmbientAsset) {
}

void AAmbientVolume::OnRep_bEnabled() {
}

void AAmbientVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAmbientVolume, bEnabled);
}


