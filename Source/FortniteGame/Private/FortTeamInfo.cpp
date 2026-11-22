#include "FortTeamInfo.h"
#include "Net/UnrealNetwork.h"

AFortTeamInfo::AFortTeamInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bNetLoadOnClient = false;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Team = 0;
    this->PrivateInfo = NULL;
}

void AFortTeamInfo::OnSpottedActorDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

int32 AFortTeamInfo::GetTeamLevel() const {
    return 0;
}

int32 AFortTeamInfo::GetTeamExperience() const {
    return 0;
}

void AFortTeamInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortTeamInfo, Team);
    DOREPLIFETIME(AFortTeamInfo, ChatRoomId);
    DOREPLIFETIME(AFortTeamInfo, TeamSpottedActors);
    DOREPLIFETIME(AFortTeamInfo, PrivateInfo);
}


