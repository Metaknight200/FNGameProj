#include "DonutChallengeIdleGame.h"
#include "Layout/Clipping.h"

UDonutChallengeIdleGame::UDonutChallengeIdleGame() {
    this->Clipping = EWidgetClipping::ClipToBounds;
    this->DayNightCycleTime = 10.00f;
    this->PlayerTopSpeed = 15.00f;
    this->BumpyRideSpeedReduction = 5.00f;
    this->MapScale = 1.00f;
    this->MaxNumLevels = 10.00f;
    this->ObjectSpawnPlacementRadius = 40.00f;
    this->NumOfTreeSpawnAttempts = 5000;
    this->NumOfRockSpawnAttempts = 5000;
    this->NumOfBigRockSpawnAttempts = 2000;
    this->NumOfJumpPadSpawnAttempts = 100;
    this->Curve_BonusSpawn_Trees = NULL;
    this->Curve_BonusSpawn_SmallBumps = NULL;
    this->Curve_BonusSpawn_Bumps = NULL;
    this->Curve_BonusSpawn_JumpPads = NULL;
    this->Anim_Jump = NULL;
    this->Anim_MediumJump = NULL;
    this->Anim_SuperJump = NULL;
    this->Anim_BumpyRide = NULL;
    this->Image_Player = NULL;
    this->Image_MobileInput = NULL;
    this->Image_MobileInput_Background = NULL;
    this->Button_Jump = NULL;
    this->Button_MobileJump = NULL;
}

void UDonutChallengeIdleGame::TryJump() {
}

void UDonutChallengeIdleGame::StartGame() {
}

void UDonutChallengeIdleGame::EndSuperJump() {
}

void UDonutChallengeIdleGame::EndJump() {
}

void UDonutChallengeIdleGame::EndBumpyRide() {
}

















