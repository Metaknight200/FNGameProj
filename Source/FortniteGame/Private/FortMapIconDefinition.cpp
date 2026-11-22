#include "FortMapIconDefinition.h"

FFortMapIconDefinition::FFortMapIconDefinition() {
    // Initialize reflected value fields omitted by the dump.
    this->Color = FLinearColor::Transparent;
    this->IconMaterialSize = FVector2D::ZeroVector;
    this->IconScale = FVector2D::ZeroVector;
    this->LocationOffset = FVector::ZeroVector;
    this->MapIcon = NULL;
    this->bUseIconSize = false;
    this->MinimapIndicatorClass = NULL;
    this->bIsVisibleOnMiniMap = false;
    this->bIsVisibleOnMap = false;
    this->bStartVisible = false;
    this->bIncludeZOffsetInDistanceChecks = false;
    this->Priority = 0;
}

