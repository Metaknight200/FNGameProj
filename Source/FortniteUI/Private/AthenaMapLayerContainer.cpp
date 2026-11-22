#include "AthenaMapLayerContainer.h"

UAthenaMapLayerContainer::UAthenaMapLayerContainer() {
    this->AthenaMapLayer = NULL;
    this->AthenaMapIconsOverlay_Main = NULL;
    this->ListView_NonLocationIconsBelowMap = NULL;
}

void UAthenaMapLayerContainer::HandleNewContextualObjectives(const TArray<UFortQuestItem*>& ContextualQuests) {
}


