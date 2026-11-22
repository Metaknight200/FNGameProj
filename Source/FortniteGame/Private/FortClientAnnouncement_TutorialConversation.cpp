#include "FortClientAnnouncement_TutorialConversation.h"
#include "EFortAnnouncementChannel.h"
#include "Net/UnrealNetwork.h"

AFortClientAnnouncement_TutorialConversation::AFortClientAnnouncement_TutorialConversation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Channel = EFortAnnouncementChannel::Tutorial;
    this->bAutoPlayConversation = false;
    this->AutoContinueDelay = 0.00f;
}

void AFortClientAnnouncement_TutorialConversation::OnRep_TutorialData(const FFortClientAnnouncementData_Tutorial& PreviousTutorialData) {
}

void AFortClientAnnouncement_TutorialConversation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortClientAnnouncement_TutorialConversation, TutorialData);
}


