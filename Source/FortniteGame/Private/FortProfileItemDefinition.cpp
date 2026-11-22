#include "FortProfileItemDefinition.h"

UFortProfileItemDefinition::UFortProfileItemDefinition() {
    this->bIsAccountItem = true;
    this->bCanBeFavorite = true;
    this->bCanBeMarkedSeen = true;
    this->GrantToProfileType = TEXT("campaign");
}


