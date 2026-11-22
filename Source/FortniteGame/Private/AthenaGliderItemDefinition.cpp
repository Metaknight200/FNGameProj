#include "AthenaGliderItemDefinition.h"
#include "EFortItemType.h"
#include "Templates/SubclassOf.h"

UAthenaGliderItemDefinition::UAthenaGliderItemDefinition() {
    this->ItemType = EFortItemType::AthenaGlider;
    this->GliderType = EFortGliderType::Glider;
    this->bActivateTrailsOnRotationalMovement = true;
    this->TrailParamName = TEXT("Moving");
    this->AttachSocket = TEXT("weapon_r");
    this->bAutoActivate = false;
    this->DeployEffectTagName = TEXT("GliderDeploy");
    this->CleanUpDeployEffect = false;
    this->bAttachNiagaraEffectToPlayerPawn = false;
    this->UserSkeletonParameterName = TEXT("SkeletalMesh");
    this->AuthoredData = NULL;
}

FName UAthenaGliderItemDefinition::GetUserSkeletonParameterName() const {
    return UserSkeletonParameterName;
}

TSoftObjectPtr<UFortPlayerGliderAnimSet> UAthenaGliderItemDefinition::GetPlayerAnimSetPtr() const {
    return NULL;
}

TSubclassOf<AFortPlayerParachute> UAthenaGliderItemDefinition::GetParachutePrefabClass() const {
    return NULL;
}

TSoftObjectPtr<USkeletalMesh> UAthenaGliderItemDefinition::GetOverrideSkelMeshPtr() const {
    return NULL;
}

TSoftClassPtr<UAnimInstance> UAthenaGliderItemDefinition::GetOverrideAnimSetPtr() const {
    return NULL;
}

bool UAthenaGliderItemDefinition::GetAttachNiagaraEffectToPlayerPawn() const {
    return bAttachNiagaraEffectToPlayerPawn;
}


