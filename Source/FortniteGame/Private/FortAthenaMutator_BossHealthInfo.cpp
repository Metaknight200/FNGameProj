#include "FortAthenaMutator_BossHealthInfo.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_BossHealthInfo::AFortAthenaMutator_BossHealthInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->DisplayMode = ECreativeBossDisplayMode::DontOverride;
}

void AFortAthenaMutator_BossHealthInfo::OnRep_DisplayMode() {
}

void AFortAthenaMutator_BossHealthInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_BossHealthInfo, DisplayMode);
}


