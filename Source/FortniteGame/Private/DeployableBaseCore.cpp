#include "DeployableBaseCore.h"
#include "Components/SceneComponent.h"

ADeployableBaseCore::ADeployableBaseCore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootComp0"));
    this->PrimarySurfaceType = SurfaceType13;
    this->WeaponResponseType = EFortBaseWeaponDamage::Environmental;
    this->bPersistToWorld = true;
    this->bApplyDefaultEnabledAbilityBucketsOnInit = false;
    this->bUseSimpleActorTouchSetupForAbilityBuckets = false;
    this->Plot = NULL;
    this->bRegisterAsGlobalGameplayEventListener = false;
}

FTransform ADeployableBaseCore::GetSimpleDeathFXTransform_Implementation() const {
    return FTransform{};
}


