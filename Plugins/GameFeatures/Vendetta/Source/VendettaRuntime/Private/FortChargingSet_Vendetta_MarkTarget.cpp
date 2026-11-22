#include "FortChargingSet_Vendetta_MarkTarget.h"
#include "Net/UnrealNetwork.h"

UFortChargingSet_Vendetta_MarkTarget::UFortChargingSet_Vendetta_MarkTarget() {
}

void UFortChargingSet_Vendetta_MarkTarget::OnRep_CurrentCharge(const FFortGameplayAttributeData& OldValue) {
}

void UFortChargingSet_Vendetta_MarkTarget::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortChargingSet_Vendetta_MarkTarget, CurrentCharge);
    DOREPLIFETIME(UFortChargingSet_Vendetta_MarkTarget, MaxCharge);
    DOREPLIFETIME(UFortChargingSet_Vendetta_MarkTarget, ChargeTime);
    DOREPLIFETIME(UFortChargingSet_Vendetta_MarkTarget, ServerTimeChargeIncrements);
}


