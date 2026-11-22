#include "AudioGameplayVolume.h"
#include "AudioGameplayVolumeComponent.h"
#include "Net/UnrealNetwork.h"

AAudioGameplayVolume::AAudioGameplayVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AGVComponent = CreateDefaultSubobject<UAudioGameplayVolumeComponent>(TEXT("AGVComponent"));
    this->bEnabled = true;
}

void AAudioGameplayVolume::SetEnabled(bool bNewEnabled) {
}

void AAudioGameplayVolume::OnRep_bEnabled() {
}

void AAudioGameplayVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAudioGameplayVolume, bEnabled);
}


