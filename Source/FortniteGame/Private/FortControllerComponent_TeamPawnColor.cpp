#include "FortControllerComponent_TeamPawnColor.h"

UFortControllerComponent_TeamPawnColor::UFortControllerComponent_TeamPawnColor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TeamPawnColorMutator = NULL;
}

void UFortControllerComponent_TeamPawnColor::HandleServerTeamChange() {
}


