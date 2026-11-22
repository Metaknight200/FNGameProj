#include "FortClientAnnouncement_Conversation.h"
#include "Components/AudioComponent.h"
#include "EFortAnnouncementChannel.h"
#include "Net/UnrealNetwork.h"

AFortClientAnnouncement_Conversation::AFortClientAnnouncement_Conversation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("SpeechComponent_0"));
    this->Channel = EFortAnnouncementChannel::Conversation;
    this->SpeechComponent = (UAudioComponent*)RootComponent;
    this->bAutoPlayConversation = true;
    this->bCurrentlyPlaying = false;
    this->CurrentSentenceIndex = -1;
}

void AFortClientAnnouncement_Conversation::CurrentSentenceAudioTimeout() {
}

void AFortClientAnnouncement_Conversation::CurrentSentenceAudioFinished() {
}

void AFortClientAnnouncement_Conversation::AssetLoadTimeout() {
}

void AFortClientAnnouncement_Conversation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortClientAnnouncement_Conversation, ConversationData);
}


