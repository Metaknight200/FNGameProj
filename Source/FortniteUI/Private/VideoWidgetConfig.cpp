#include "VideoWidgetConfig.h"

FVideoWidgetConfig::FVideoWidgetConfig() {
    this->StreamingMediaSource = NULL;
    this->bCheckAutoPlay = false;
    this->bForceAutoPlay = false;
    this->bStreamingEnabled = false;
    this->bShouldBeModal = false;
    this->bUseSkipBoundaries = false;
    this->bHoldToSkip = false;
    this->bFadeFromWhite = false;
    this->bAllowSkipping = false;
    this->bEnableLooping = false;
    this->bAutoClose = false;
    this->bHideControls = false;
    this->bHideBackground = false;
    this->bStartMTTransparent = false;
    this->SoundMixOverride = NULL;
    this->bOverrideSoundMix = false;
    this->bControlWorldRendering = false;
}

