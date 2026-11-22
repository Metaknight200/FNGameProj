#include "CreativeIslandResourceManagerComponent.h"

UCreativeIslandResourceManagerComponent::UCreativeIslandResourceManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UCreativeIslandResourceManagerComponent::RequestResource(const FName Tag, const FVector& WorldLocation) {
    return false;
}

void UCreativeIslandResourceManagerComponent::FreeResource(const FName Tag, const FVector& WorldLocation) {
}


