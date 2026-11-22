#include "FortClientAnnouncementManager.h"
#include "Net/UnrealNetwork.h"

AFortClientAnnouncementManager::AFortClientAnnouncementManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

void AFortClientAnnouncementManager::OnRep_ClientAnnouncements(TArray<AFortClientAnnouncement*>& PreviousClientAnnouncements) {
}

void AFortClientAnnouncementManager::OnRep_CancelledAnnouncements() {
}

void AFortClientAnnouncementManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortClientAnnouncementManager, ClientAnnouncements);
    DOREPLIFETIME(AFortClientAnnouncementManager, CancelledAnnouncements);
}


