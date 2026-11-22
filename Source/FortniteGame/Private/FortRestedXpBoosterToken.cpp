#include "FortRestedXpBoosterToken.h"
#include "EFortItemType.h"

UFortRestedXpBoosterToken::UFortRestedXpBoosterToken() {
    this->ItemType = EFortItemType::RestedXpBoosterToken;
    this->ProfileType = EItemProfileType::Athena;
    this->RestedXpAmountToGrant = 160000;
    this->bRequiresBattlePass = true;
}


