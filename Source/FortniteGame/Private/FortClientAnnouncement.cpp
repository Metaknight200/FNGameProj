#include "FortClientAnnouncement.h"
#include "Net/UnrealNetwork.h"

AFortClientAnnouncement::AFortClientAnnouncement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetTemporary = true;
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->DisplayWidget = NULL;
    this->TimeToLive = -1.00f;
    this->bRetrigger = false;
    this->bDestroyOnAllClientsStopped = false;
    this->Channel = EFortAnnouncementChannel::Primary;
    this->Priority = 10;
    this->bInterrupt = false;
    this->ClientDeliveryStatus = EFortAnnouncementDelivery::Created;
    this->ClientDeliveryTime = -1.00f;
}

void AFortClientAnnouncement::StopClientAnnouncement() {
}



int32 AFortClientAnnouncement::GetPriority() {
    return Priority;
}

void AFortClientAnnouncement::CancelClientAnnouncement() {
}

void AFortClientAnnouncement::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortClientAnnouncement, AnnouncementID);
    DOREPLIFETIME(AFortClientAnnouncement, Priority);
    DOREPLIFETIME(AFortClientAnnouncement, bInterrupt);
    DOREPLIFETIME(AFortClientAnnouncement, RecipientControllers);
}


