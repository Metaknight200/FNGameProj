#include "MoleMinimap.h"
#include "Layout/Clipping.h"

UMoleMinimap::UMoleMinimap() {
    this->Clipping = EWidgetClipping::ClipToBounds;
    this->ShowMapBackground = true;
    this->ZoomLevel = 1.00f;
    this->MinimapIndicatorZoomLevel = 1.00f;
}


