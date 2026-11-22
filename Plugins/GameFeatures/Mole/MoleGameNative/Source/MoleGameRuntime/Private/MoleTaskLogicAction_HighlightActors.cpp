#include "MoleTaskLogicAction_HighlightActors.h"

UMoleTaskLogicAction_HighlightActors::UMoleTaskLogicAction_HighlightActors() {
    this->bUsesAssociatedTaskActors = true;
    this->bUsesActionRemovalPolicyBitmask = true;
    this->bHighlight = true;
    this->bShowIndicator = true;
    this->bRequirePermissionForEmphasisFX = false;
    this->bShowIndicatorInGoalMode = false;
}


