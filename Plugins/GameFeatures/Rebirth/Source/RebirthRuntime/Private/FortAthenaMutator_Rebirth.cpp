#include "FortAthenaMutator_Rebirth.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_Rebirth::AFortAthenaMutator_Rebirth(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemPromotionMutator = NULL;
    this->MaxItemRarity = EFortRarity::Legendary;
    this->StartingItemRarity = EFortRarity::Common;
}

void AFortAthenaMutator_Rebirth::OnRep_PlayerRarities() {
}

void AFortAthenaMutator_Rebirth::OnClientSpectatorChanged(AFortPlayerStateZone* SpectatingTarget) {
}

void AFortAthenaMutator_Rebirth::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Rebirth, ItemPromotionMutator);
    DOREPLIFETIME(AFortAthenaMutator_Rebirth, PlayerRarities);
}


