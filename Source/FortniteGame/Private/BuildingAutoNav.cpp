#include "BuildingAutoNav.h"

ABuildingAutoNav::ABuildingAutoNav(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bBlockNavigationLinks = false;
    this->bAutoAssignNavProperties = true;
}


