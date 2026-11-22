#include "AthenaMapLayer.h"
#include "Layout/Clipping.h"

UAthenaMapLayer::UAthenaMapLayer() {
    this->Clipping = EWidgetClipping::ClipToBounds;
    this->LocalPlayer = NULL;
}

void UAthenaMapLayer::SetLocalPlayer(ULocalPlayer* NewLocalPlayer) {
}

void UAthenaMapLayer::FlashPlayerIcon() {
}

void UAthenaMapLayer::ClearTouches() {
}


