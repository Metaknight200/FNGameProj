#include "FortAthenaMutator_PlayerSettingsBase.h"

AFortAthenaMutator_PlayerSettingsBase::AFortAthenaMutator_PlayerSettingsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->AbilitySetToGrant = NULL;
    this->AbilitySetOptions = NULL;
    this->GravityPresets = NULL;
    this->GameResourcesCreativeTag = TEXT("GameConsumable");
    this->EliminationStat = NULL;
    this->AssistStat = NULL;
    this->DefaultScopeSettings = NULL;
    this->CurrentScopeSettings = NULL;
}


