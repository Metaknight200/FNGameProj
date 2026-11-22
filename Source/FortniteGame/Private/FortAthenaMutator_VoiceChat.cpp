#include "FortAthenaMutator_VoiceChat.h"

AFortAthenaMutator_VoiceChat::AFortAthenaMutator_VoiceChat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameMode = true;
    this->ChannelType = EFortAthenaMutator_VoiceChatChannelType::Default;
}


