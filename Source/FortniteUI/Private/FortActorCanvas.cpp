#include "FortActorCanvas.h"
#include "Components/SlateWrapperTypes.h"

UFortActorCanvas::UFortActorCanvas() {
    this->Visibility = ESlateVisibility::HitTestInvisible;
    this->bDrawElementsInOrder = false;
}

void UFortActorCanvas::OnHUDElementVisibilityChanged(const FGameplayTagContainer& HiddenHUDElementTags) {
}

UFortActorCanvasSlot* UFortActorCanvas::AddActorIndicator(UFortActorIndicatorWidget* Indicator) {
    return NULL;
}


