#include "AthenaSkyDiveContrailItemDefinition.h"
#include "EFortItemType.h"

UAthenaSkyDiveContrailItemDefinition::UAthenaSkyDiveContrailItemDefinition() {
    this->ItemType = EFortItemType::AthenaSkyDiveContrail;
    this->VelocityVectorParameterName = TEXT("User.FEVec");
    this->ParaGlideLeanParameterName = TEXT("User.ParaGlideLeanAlpha");
    this->bWaitForFrontendSceneTransition = false;
}

TSoftObjectPtr<UFXSystemAsset> UAthenaSkyDiveContrailItemDefinition::GetContrailSoftPath() const {
    return NULL;
}


