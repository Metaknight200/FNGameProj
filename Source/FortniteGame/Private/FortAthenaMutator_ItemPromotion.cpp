#include "FortAthenaMutator_ItemPromotion.h"

AFortAthenaMutator_ItemPromotion::AFortAthenaMutator_ItemPromotion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->UpgradeTable = NULL;
    this->HighestUpgradeTier = EFortRarity::Common;
}


