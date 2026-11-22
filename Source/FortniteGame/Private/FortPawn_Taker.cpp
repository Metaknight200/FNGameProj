#include "FortPawn_Taker.h"

AFortPawn_Taker::AFortPawn_Taker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpottedEvent = TEXT("SpottedTaker");
    this->VocalChords.AddDefaulted(1);
    this->AnimUpdateRateVisibleMaxDistanceFactor.AddDefaulted(2);
    this->FollowPlayerEvent = EFortCombatEvents::TakerFollowing;
    this->InCombatNearPlayerEvent = EFortCombatEvents::TakerCombatNearby;
    this->bCanMoveThroughWalls = true;
    this->bCanUseNavWalking = false;
    this->bCanUseSimpleCollisions = false;
    this->SlowShackleScale = 0.75f;
    this->bUseClimbLinks = true;
}





