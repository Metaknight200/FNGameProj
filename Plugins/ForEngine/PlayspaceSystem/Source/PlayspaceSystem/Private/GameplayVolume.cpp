#include "GameplayVolume.h"
#include "Net/UnrealNetwork.h"

AGameplayVolume::AGameplayVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayspaceClass = NULL;
    this->Playspace = NULL;
    this->BoundsComponent = NULL;
}

void AGameplayVolume::UpdateSize(const FVector& NewScale) {
}

APlayspace* AGameplayVolume::GetPlayspace() const {
    return Playspace;
}

void AGameplayVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGameplayVolume, Playspace);
}


