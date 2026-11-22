#include "CustomCharacterPartAnimInstance_TowerSentinelPack.h"

UCustomCharacterPartAnimInstance_TowerSentinelPack::UCustomCharacterPartAnimInstance_TowerSentinelPack() {
    this->IsEmotingAlpha = 0.00f;
    this->JumpingAlpha = 0.00f;
    this->SkydivingForceScale = 0.10f;
    this->DanceGravityBoneName = TEXT("pelvis");
    this->DanceGravityBaseName = TEXT("floorCOL");
    this->DanceGravityInflectionAngle = 90.00f;
    this->IsEmotingAlphaMin = 0.50f;
    this->IsEmotingAlphaMax = 1.00f;
    this->JumpingAlphaMin = 0.00f;
    this->JumpingAlphaMax = 1.00f;
}

void UCustomCharacterPartAnimInstance_TowerSentinelPack::UpdateWindVector() {
}

void UCustomCharacterPartAnimInstance_TowerSentinelPack::UpdateJumpingAlpha() {
}

void UCustomCharacterPartAnimInstance_TowerSentinelPack::UpdateIsEmotingAlpha() {
}

void UCustomCharacterPartAnimInstance_TowerSentinelPack::UpdateFinalGravity() {
}

void UCustomCharacterPartAnimInstance_TowerSentinelPack::UpdateCompLinearScales() {
}

void UCustomCharacterPartAnimInstance_TowerSentinelPack::UpdateBoneRotators() {
}

void UCustomCharacterPartAnimInstance_TowerSentinelPack::UpdateBodyJoints() {
}

FVector UCustomCharacterPartAnimInstance_TowerSentinelPack::CalculateWindVector() {
    return FVector{};
}

float UCustomCharacterPartAnimInstance_TowerSentinelPack::CalculateJumpingAlpha() {
    return 0.0f;
}

float UCustomCharacterPartAnimInstance_TowerSentinelPack::CalculateIsEmotingAlpha() {
    return 0.0f;
}

FVector UCustomCharacterPartAnimInstance_TowerSentinelPack::CalculateFinalGravity() {
    return FVector{};
}

FVector UCustomCharacterPartAnimInstance_TowerSentinelPack::CalculateCompLinearVelScale() {
    return FVector{};
}

FVector UCustomCharacterPartAnimInstance_TowerSentinelPack::CalculateCompLinearAccScale() {
    return FVector{};
}


