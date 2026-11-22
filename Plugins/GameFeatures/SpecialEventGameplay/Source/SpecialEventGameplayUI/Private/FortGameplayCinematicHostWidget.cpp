#include "FortGameplayCinematicHostWidget.h"

UFortGameplayCinematicHostWidget::UFortGameplayCinematicHostWidget() {
    this->IntroPanelWidgetClass = NULL;
    this->OutroPanelWidgetClass = NULL;
    this->LoadingScreenDefinition = NULL;
}

void UFortGameplayCinematicHostWidget::OnPanelDeactivated(UCommonActivatablePanelLegacy* DeactivatedPanel) {
}


