#include "MoleUIAssetManagerComponent.h"

UMoleUIAssetManagerComponent::UMoleUIAssetManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BundlesToLoad.AddDefaulted(1);
}


