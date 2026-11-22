#include "FortMiniMapData.h"

FFortMiniMapData::FFortMiniMapData() {
    // Initialize reflected value fields omitted by the dump.
    this->Color = FLinearColor::Transparent;
    this->EnemyColor = FLinearColor::Transparent;
    this->FriendColor = FLinearColor::Transparent;
    this->IconMaterialSize = FVector2D::ZeroVector;
    this->IconScale = FVector2D::ZeroVector;
    this->LocationOffset = FVector::ZeroVector;
    this->NeutralColor = FLinearColor::Transparent;
    this->PulseColor = FLinearColor::Transparent;
    this->MiniMapIcon = NULL;
    this->bUseIconSize = false;
    this->bIsVisible = false;
    this->bIsVisibleOnMiniMap = false;
    this->bIsVisibleOnMap = false;
    this->bIsVisibilityBasedOnTeam = false;
    this->bShowVerticalOffset = false;
    this->bShowFarOffIndicator = false;
    this->bDisplayIconEvenOnFogOfWar = false;
    this->bAllowLocalOverrides = false;
    this->bUseTeamAffiliationColors = false;
    this->ColorPulsesPerSecond = 0.00f;
    this->SizePulsesPerSecond = 0.00f;
    this->ViewableDistance = 0.00f;
    this->Priority = 0;
    this->Team = 0;
}

