#include "FortVoiceChannelSpeakerWidget.h"

UFortVoiceChannelSpeakerWidget::UFortVoiceChannelSpeakerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ToleratedSilenceDelay = 1.00f;
    this->PerfUpdateIntervalInSecs = 0.06f;
    this->OpenCloseAnimProxyDuration = 0.15f;
    this->bPerfCollapseHorizontal = true;
    this->TalkingAnimProxyDuration = 0.25f;
    this->Anim_Close = NULL;
    this->Anim_Open = NULL;
    this->Text_DisplayName = NULL;
    this->Text_ChannelName = NULL;
    this->Border_ScaleBound = NULL;
    this->AvatarIcon = NULL;
    this->Image_ActiveVoiceIcon = NULL;
}



void UFortVoiceChannelSpeakerWidget::HandleAnimationFinished() {
}


