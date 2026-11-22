#include "CurieManager.h"

UCurieManager::UCurieManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurieComponentClass = NULL;
    this->MaterialDataRegistryName = TEXT("Curie.Materials");
    this->ElementDataRegistryName = TEXT("Curie.Elements");
    this->EntityStateDataRegistryName = TEXT("Curie.EntityStates");
    this->MaterialDefinitionsTable = NULL;
    this->ElementDefinitionsTable = NULL;
    this->EntityStateDefinitionsTable = NULL;
    this->bUseDataRegistry = true;
}

void UCurieManager::UnbindDelegateForCurieStateDetached(UObject* CurieOwner, const FCurieStateDetachedSignature& Delegate) {
}

void UCurieManager::UnbindDelegateForCurieStateAttached(UObject* CurieOwner, const FCurieStateAttachedSignature& Delegate) {
}

void UCurieManager::UnbindDelegateForCurieElementInteract(UObject* CurieOwner, const FCurieElementInteractSignature& Delegate) {
}

void UCurieManager::UnbindDelegateForCurieElementEndInteract(UObject* CurieOwner, const FCurieElementEndInteractSignature& Delegate) {
}

void UCurieManager::UnbindDelegateForCurieElementDetached(UObject* CurieOwner, const FCurieElementDetachedSignature& Delegate) {
}

void UCurieManager::UnbindDelegateForCurieElementBeginInteract(UObject* CurieOwner, const FCurieElementBeginInteractSignature& Delegate) {
}

void UCurieManager::UnbindDelegateForCurieElementAttached(UObject* CurieOwner, const FCurieElementAttachedSignature& Delegate) {
}

void UCurieManager::HandleContainerOwnerDestroyed(AActor* OwnerActor) {
}

void UCurieManager::BindDelegateForCurieStateDetached(UObject* CurieOwner, const FCurieStateDetachedSignature& Delegate) {
}

void UCurieManager::BindDelegateForCurieStateAttached(UObject* CurieOwner, const FCurieStateAttachedSignature& Delegate) {
}

void UCurieManager::BindDelegateForCurieElementInteract(UObject* CurieOwner, const FCurieElementInteractSignature& Delegate) {
}

void UCurieManager::BindDelegateForCurieElementEndInteract(UObject* CurieOwner, const FCurieElementEndInteractSignature& Delegate) {
}

void UCurieManager::BindDelegateForCurieElementDetached(UObject* CurieOwner, const FCurieElementDetachedSignature& Delegate) {
}

void UCurieManager::BindDelegateForCurieElementBeginInteract(UObject* CurieOwner, const FCurieElementBeginInteractSignature& Delegate) {
}

void UCurieManager::BindDelegateForCurieElementAttached(UObject* CurieOwner, const FCurieElementAttachedSignature& Delegate) {
}


