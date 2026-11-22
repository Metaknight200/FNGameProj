#include "FortGameModePickup_Wax.h"
#include "Net/UnrealNetwork.h"

AFortGameModePickup_Wax::AFortGameModePickup_Wax(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsFirstGeneration = false;
    this->AmountOfTokens = 0;
}


void AFortGameModePickup_Wax::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameModePickup_Wax, bIsFirstGeneration);
    DOREPLIFETIME(AFortGameModePickup_Wax, AmountOfTokens);
}


