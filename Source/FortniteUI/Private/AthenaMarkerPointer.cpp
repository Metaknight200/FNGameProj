#include "AthenaMarkerPointer.h"
#include "Components/SlateWrapperTypes.h"

UAthenaMarkerPointer::UAthenaMarkerPointer() {
    this->Visibility = ESlateVisibility::HitTestInvisible;
    this->LineMeshMaterial = NULL;
}

void UAthenaMarkerPointer::SetTargetScreenPosition(FVector2D InTargetScreenPosition) {
}

void UAthenaMarkerPointer::SetLineMeshMaterial(UMaterialInterface* Material) {
}


