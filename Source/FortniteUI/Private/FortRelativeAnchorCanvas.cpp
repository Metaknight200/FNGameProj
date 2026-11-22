#include "FortRelativeAnchorCanvas.h"
#include "Components/SlateWrapperTypes.h"

UFortRelativeAnchorCanvas::UFortRelativeAnchorCanvas() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->ZLayerOffset = 0;
}

void UFortRelativeAnchorCanvas::SetZLayerOffset(const int32 Value) {
}

UFortRelativeAnchorCanvasSlot* UFortRelativeAnchorCanvas::AddSlot(const UWidget* ContentWidget, const UWidget* AnchorWidget) {
    return NULL;
}


