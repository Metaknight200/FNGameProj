#include "FortBattlePassTile.h"

UFortBattlePassTile::UFortBattlePassTile() {
    this->Image_RewardItem = NULL;
    this->Image_Currency = NULL;
}










bool UFortBattlePassTile::IsAffordable() const {
    return false;
}

bool UFortBattlePassTile::HasPrerequisites() const {
    return false;
}


