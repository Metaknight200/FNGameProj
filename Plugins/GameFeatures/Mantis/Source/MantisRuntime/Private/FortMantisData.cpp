#include "FortMantisData.h"

UFortMantisData::UFortMantisData() {
    this->bDetachCharacterRotationFromCamera = true;
    this->ReattachCharacterRotationBlendTime = 0.40f;
    this->ReattachCharacterRotationBlendExponent = 4.00f;
    this->WindupCharacterRotationRate = 2400.00f;
    this->ExecutionCharacterRotationRate = 90.00f;
    this->RecoveryCharacterRotationRate = 180.00f;
    this->bShowTargetHealthBar = false;
    this->TechniqueAbility = NULL;
}


