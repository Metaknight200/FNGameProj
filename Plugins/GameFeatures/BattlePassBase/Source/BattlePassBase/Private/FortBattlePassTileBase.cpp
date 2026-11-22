#include "FortBattlePassTileBase.h"

UFortBattlePassTileBase::UFortBattlePassTileBase() {
    this->SizeBox_Content = NULL;
    this->UnitHeight = 0.00f;
    this->UnitWidth = 0.00f;
}

void UFortBattlePassTileBase::SetState(const BattlePassTileAvailabilityStates NewState) {
}

void UFortBattlePassTileBase::SetSize(const EPageItemTileSize TileSize, const FVector2D& CellSpacing) {
}






bool UFortBattlePassTileBase::IsOwned() const {
    return false;
}

bool UFortBattlePassTileBase::IsLocked() const {
    return false;
}

bool UFortBattlePassTileBase::IsAvailable() const {
    return false;
}

BattlePassTileAvailabilityStates UFortBattlePassTileBase::GetState() const {
    return BattlePassTileAvailabilityStates::Invalid;
}


