#include "MoleAssetManagerComponent.h"

UMoleAssetManagerComponent::UMoleAssetManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BundlesToLoad.AddDefaulted(1);
}


