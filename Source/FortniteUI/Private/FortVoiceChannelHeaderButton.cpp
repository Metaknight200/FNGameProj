#include "FortVoiceChannelHeaderButton.h"

UFortVoiceChannelHeaderButton::UFortVoiceChannelHeaderButton() {
    this->Text_ChannelTitle = NULL;
    this->Text_ChannelInfo = NULL;
}


bool UFortVoiceChannelHeaderButton::IsActiveChannel() const {
    return false;
}

bool UFortVoiceChannelHeaderButton::CanJoinChannel() const {
    return false;
}


