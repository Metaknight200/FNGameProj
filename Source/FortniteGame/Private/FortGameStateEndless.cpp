#include "FortGameStateEndless.h"
#include "Net/UnrealNetwork.h"

AFortGameStateEndless::AFortGameStateEndless(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WaveNumber = 1;
}

void AFortGameStateEndless::SetWaveNumber(int32 NewWaveNumber) {
}

int32 AFortGameStateEndless::GetWaveNumber() {
    return WaveNumber;
}

void AFortGameStateEndless::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameStateEndless, WaveNumber);
}


