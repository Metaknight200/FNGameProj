#include "FortTeamPrivateInfo.h"
#include "Net/UnrealNetwork.h"

AFortTeamPrivateInfo::AFortTeamPrivateInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->TeamInfo = NULL;
    this->AverageDamageDealt = 0;
}

void AFortTeamPrivateInfo::OnRep_RepData() {
}

void AFortTeamPrivateInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortTeamPrivateInfo, RepData);
    DOREPLIFETIME(AFortTeamPrivateInfo, LatentTeamRepData);
    DOREPLIFETIME(AFortTeamPrivateInfo, AverageDamageDealt);
}


