#include "FortCurieGlowFadeRequest.h"

FFortCurieGlowFadeRequest::FFortCurieGlowFadeRequest() {
    this->CurieComponent = NULL;
    this->FXType = EFortCurieNativeFXType::None;
    this->StartTimestamp = 0.00f;
    this->bIsFadeIn = false;
}

