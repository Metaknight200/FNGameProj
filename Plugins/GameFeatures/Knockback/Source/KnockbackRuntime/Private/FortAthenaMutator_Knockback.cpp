#include "FortAthenaMutator_Knockback.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_Knockback::AFortAthenaMutator_Knockback(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->bStorePlayerKnockbackData = false;
    this->bReplicatePlayerKnockbackData = false;
    this->KnockbackMultiplierInitialValue = 0.00f;
}

void AFortAthenaMutator_Knockback::SetPlayersShouldBreakThroughStructures(const bool bActive, AFortPlayerPawn* PlayerPawn) {
}

void AFortAthenaMutator_Knockback::HandleBlockedCharacterMovement(FHitResult& InOutImpact, AFortPawn* FortPawn) {
}

float AFortAthenaMutator_Knockback::GetPercentDamageMediumMaxThreshold() const {
    return 0.0f;
}

float AFortAthenaMutator_Knockback::GetPercentDamageLowMaxThreshold() const {
    return 0.0f;
}

float AFortAthenaMutator_Knockback::GetKnockbackMultiplierInitialValue() const {
    return KnockbackMultiplierInitialValue;
}

TArray<FKnockbackMutatorData> AFortAthenaMutator_Knockback::GetAllPlayersKnockbackData() {
    return TArray<FKnockbackMutatorData>();
}

void AFortAthenaMutator_Knockback::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Knockback, AllPlayersKnockbackData);
}


