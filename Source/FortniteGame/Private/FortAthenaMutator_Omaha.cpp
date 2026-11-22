#include "FortAthenaMutator_Omaha.h"

AFortAthenaMutator_Omaha::AFortAthenaMutator_Omaha(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->SpecialTeamMembersCount[0] = 0;
    this->SpecialTeamMembersCount[1] = 0;
}


