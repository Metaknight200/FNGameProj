#include "FortControllerComponent_SeasonItem.h"

UFortControllerComponent_SeasonItem::UFortControllerComponent_SeasonItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

void UFortControllerComponent_SeasonItem::ServerSetAthenaSeasonItemMapIconState_Implementation(const FGameplayTag& ItemTag, const EAthenaSeasonMapIconState IconState) {
}
bool UFortControllerComponent_SeasonItem::ServerSetAthenaSeasonItemMapIconState_Validate(const FGameplayTag& ItemTag, const EAthenaSeasonMapIconState IconState) {
    return true;
}

void UFortControllerComponent_SeasonItem::ClientSetAthenaSeasonItemMapIconState_Implementation(const FGameplayTag& ItemTag, const EAthenaSeasonMapIconState IconState) {
}


