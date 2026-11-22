#include "AthenaEventTokenItemDefinition.h"
#include "EFortItemType.h"

UAthenaEventTokenItemDefinition::UAthenaEventTokenItemDefinition() {
    this->ItemType = EFortItemType::AthenaEventToken;
    this->GrantToProfileType = TEXT("athena");
    this->TokenType = EEventTokenType::Invite;
}


