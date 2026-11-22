#include "FortCarriedObject.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"

AFortCarriedObject::AFortCarriedObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->ProjectileComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp0"));
    this->bPickupOnTouch = false;
    this->Team = 0;
    this->SpawnPointActor = NULL;
}

void AFortCarriedObject::ReturnToSpawnPoint() {
}

void AFortCarriedObject::OnRep_HolderInfo(FCarriedObjectAttachmentInfo& PreviousInfo) {
}

AActor* AFortCarriedObject::GetHoldingActor() const {
    return NULL;
}

void AFortCarriedObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortCarriedObject, HolderInfo);
    DOREPLIFETIME(AFortCarriedObject, Team);
    DOREPLIFETIME(AFortCarriedObject, SpawnPointActor);
}


