#include "TurretCosmeticData.h"

FTurretCosmeticData::FTurretCosmeticData() {
    // Initialize reflected value fields omitted by the dump.
    this->HotColor = FLinearColor::Transparent;
    this->WarmColor = FLinearColor::Transparent;
    this->OverheatSmoke = NULL;
    this->OverheatScreenL = NULL;
    this->OverheatScreenR = NULL;
    this->OverheatAudio = NULL;
    this->OnOverheatAudio = NULL;
    this->OverheatAudioCurve = NULL;
    this->ServoAudio = NULL;
    this->AimingWeaponComponent = NULL;
    this->OverheatParamOnOverheatValue = 0.00f;
    this->RotatationAudioRangeInA = 0.00f;
    this->RotatationAudioRangeInB = 0.00f;
    this->RotatationAudioRangeOutA = 0.00f;
    this->RotatationAudioRangeOutB = 0.00f;
    this->HotThreshold = 0.00f;
    this->WarmThreshold = 0.00f;
    this->AudioFadeinDuration = 0.00f;
    this->AudioFadeoutDuration = 0.00f;
    this->OverheatColorExponent = 0.00f;
    this->ReplicateOverheatMax = 0.00f;
}

