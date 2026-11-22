#include "FortPlayerDeathReport.h"

FFortPlayerDeathReport::FFortPlayerDeathReport() {
    // Initialize reflected value fields omitted by the dump.
    this->ViewLocationAtTimeOfDeath = FVector::ZeroVector;
    this->ViewRotationAtTimeOfDeath = FRotator::ZeroRotator;
    this->ServerTimeForRespawn = 0.00f;
    this->ServerTimeForResurrect = 0.00f;
    this->LethalDamage = 0.00f;
    this->KillerPlayerState = NULL;
    this->KillerPawn = NULL;
    this->KillerHealthPercent = 0.00f;
    this->KillerShieldPercent = 0.00f;
    this->KillerWeapon = NULL;
    this->DamageCauser = NULL;
    this->bDroppedBackpack = false;
    this->bNotifyUI = false;
}

