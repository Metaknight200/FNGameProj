#include "FortPropertyOverrideReplShared.h"
#include "Net/UnrealNetwork.h"

AFortPropertyOverrideReplShared::AFortPropertyOverrideReplShared(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_DormantAll;
}

void AFortPropertyOverrideReplShared::OnRep_ReplOverrides() {
}

void AFortPropertyOverrideReplShared::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPropertyOverrideReplShared, ReplOverrides);
}


