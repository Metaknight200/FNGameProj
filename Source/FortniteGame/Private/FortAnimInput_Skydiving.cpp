#include "FortAnimInput_Skydiving.h"

FFortAnimInput_Skydiving::FFortAnimInput_Skydiving() {
    // Initialize reflected value fields omitted by the dump.
    this->ParaGilderRootOffset = FVector::ZeroVector;
    this->ParaGliderRootRotationOverride = FRotator::ZeroRotator;
    this->bUseParaGlideRootModifier = false;
    this->bIsSkydivingFromLaunchPad = false;
    this->bIsSkydivingFromBus = false;
    this->bIsInVortex = false;
    this->bIsUsingUmbrella = false;
    this->bIsActivelyStrafingInAir = false;
    this->bIsDiving = false;
    this->bIsDivingUpInVortex = false;
    this->bIsParachuteOpen = false;
    this->bIsSkydiving = false;
    this->bIsParachuteLeaning = false;
    this->bIsSkydiveLeaning = false;
    this->bIsLeaning = false;
    this->bIsSkydiveDiveMode = false;
    this->bParachuteLeanTransition = false;
    this->bPlayedParachuteLeanTransition = false;
    this->bPlaySkydiveDrift = false;
    this->bSkydiveDriftDelayActive = false;
    this->bSkydiveDriftAnimAllowed = false;
    this->bIsGliderRight = false;
    this->bIsGliderCenter = false;
    this->bIsGliderLeft = false;
    this->bIsGliderForward = false;
    this->bIsGliderBack = false;
    this->LocalAccelForward = 0.00f;
    this->LocalAccelRight = 0.00f;
    this->LocalVelocityRight = 0.00f;
    this->SkydiveAimPitch = 0.00f;
    this->SkydiveAimPitchInterpSpeed = 0.00f;
    this->SkydiveAimYaw = 0.00f;
    this->DeployChuteAnimRate = 0.00f;
    this->SkydiveDriftAnimRate = 0.00f;
    this->SkydiveDriftAnimRateCurrent = 0.00f;
    this->SkydiveFidgetAnimRate = 0.00f;
    this->SkydiveFidgetAnimRateCurrent = 0.00f;
    this->SkydiveAdditiveAlpha = 0.00f;
    this->SkydiveDriftDelay = 0.00f;
    this->SkydiveDriftAnim = 0;
    this->SkydiveDriftAnimMax = 0;
    this->LaunchpadAnim = 0;
    this->LocalAccelDir = ESkydivingDirection::Center;
    this->DirectionLast = ESkydivingDirection::Center;
}

