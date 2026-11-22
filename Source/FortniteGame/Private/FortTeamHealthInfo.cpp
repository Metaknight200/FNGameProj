#include "FortTeamHealthInfo.h"
#include "Net/UnrealNetwork.h"

AFortTeamHealthInfo::AFortTeamHealthInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->OwnerHealthComponent = NULL;
    this->FortTeamInfo = NULL;
    this->TeamNum = 0;
}

void AFortTeamHealthInfo::OnRep_RepDataReplicated() {
}

void AFortTeamHealthInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortTeamHealthInfo, OwnerHealthComponent);
    DOREPLIFETIME(AFortTeamHealthInfo, RepData);
    DOREPLIFETIME(AFortTeamHealthInfo, TeamNum);
}


