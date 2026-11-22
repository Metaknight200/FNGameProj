#include "FortPlayerCharm.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Components/SceneComponent.h"

AFortPlayerCharm::AFortPlayerCharm(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent0"));
    this->CharmItemDef = NULL;
    this->CharmMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("CharmMesh0"));
    this->bIsFrontEndPreview = false;
    this->CharmAttachedTo = NULL;
    this->CharmModifier = NULL;
    this->CharmMesh->SetupAttachment(RootComponent);
}



USoundBase* AFortPlayerCharm::GetCharmSoundAssetByIndex(const int32 IndexIn, bool& bValidOut) const {
    return NULL;
}

USoundBase* AFortPlayerCharm::GetCharmSoundAssetByDescName(const FName DescNameIn, bool& bValidOut) const {
    return NULL;
}

USkeletalMeshComponentBudgeted* AFortPlayerCharm::GetCharmMeshComponent() const {
    return NULL;
}

FName AFortPlayerCharm::GetCharmAttachedToSocket() const {
    return CharmAttachedToSocket;
}

USceneComponent* AFortPlayerCharm::GetCharmAttachedToComponent() const {
    return NULL;
}


