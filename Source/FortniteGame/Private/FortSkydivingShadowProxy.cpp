#include "FortSkydivingShadowProxy.h"
#include "Components/SceneComponent.h"

AFortSkydivingShadowProxy::AFortSkydivingShadowProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->SkydivingHeightThreshold = 15000.00f;
    this->SkydivingHeightCheckInterval = 0.50f;
    this->bDestroyOnHide = true;
    this->ViewingPlayerController = NULL;
}



void AFortSkydivingShadowProxy::CheckHeight() {
}


