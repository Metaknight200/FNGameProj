#include "SoundLibraryComponent.h"

USoundLibraryComponent::USoundLibraryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bAutoEnable = true;
}

void USoundLibraryComponent::Enable() {
}

void USoundLibraryComponent::Disable() {
}


