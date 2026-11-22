#include "FortAthenaMutator_VehicleTrickScore.h"

AFortAthenaMutator_VehicleTrickScore::AFortAthenaMutator_VehicleTrickScore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->ScoreMultiplier = 1.00f;
}


