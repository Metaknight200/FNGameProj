#include "FortClientAnnouncement_ZoneModifiers.h"
#include "Net/UnrealNetwork.h"

AFortClientAnnouncement_ZoneModifiers::AFortClientAnnouncement_ZoneModifiers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayTime = 5.00f;
}

void AFortClientAnnouncement_ZoneModifiers::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortClientAnnouncement_ZoneModifiers, DisplayTime);
    DOREPLIFETIME(AFortClientAnnouncement_ZoneModifiers, ModifiersData);
}


