#include "FortGenericDataStoreManagerComponent.h"

UFortGenericDataStoreManagerComponent::UFortGenericDataStoreManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UFortGenericDataStoreManagerComponent::RemoveNamedStoreByType(const FName& StoreName, UClass*& ClassType) {
    return false;
}

UObject* UFortGenericDataStoreManagerComponent::GetNamedStoreByType(const FName& StoreName, UClass*& ClassType) const {
    return NULL;
}

UObject* UFortGenericDataStoreManagerComponent::AddNamedStoreByType(const FName& StoreName, UClass*& ClassType) {
    return NULL;
}


