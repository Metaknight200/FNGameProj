#include "FortCurieManager.h"
#include "Net/UnrealNetwork.h"

UFortCurieManager::UFortCurieManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurieManagerRegistryName = TEXT("Curie.Manager");
    this->FXManager = NULL;
    this->CurieSettings = NULL;
    this->bAllowCurieApplicationViaDamageFormulaTags = false;
    this->bCurieElementsBlockBuildingEdit = true;
    this->bCurieElementsBlockBuildingRepair = true;
}

void UFortCurieManager::UnbindDelegateOnToggleGroupMemberActiveStateChange(FGameplayTag ToggleGroup, FCurieToggleGroupMemberStateChangeSignature Delegate) {
}

void UFortCurieManager::UnbindDelegateOnToggleGroupFullyInactive(FGameplayTag ToggleGroup, FCurieToggleGroupSameStateSignature Delegate) {
}

void UFortCurieManager::UnbindDelegateOnToggleGroupFullyActive(FGameplayTag ToggleGroup, FCurieToggleGroupSameStateSignature Delegate) {
}

void UFortCurieManager::OnToggleGroupComponentDeactivated(UActorComponent* InComponent) {
}

void UFortCurieManager::OnToggleGroupComponentActivated(UActorComponent* InComponent, bool bReset) {
}

void UFortCurieManager::OnRep_ValidStateIdentifiers() {
}

void UFortCurieManager::InternalPhysicsComponentAwakeChanged(UPrimitiveComponent* SimulatingComponent, bool bIsAwake) {
}

void UFortCurieManager::BindDelegateOnToggleGroupMemberActiveStateChange(FGameplayTag ToggleGroup, FCurieToggleGroupMemberStateChangeSignature Delegate) {
}

void UFortCurieManager::BindDelegateOnToggleGroupFullyInactive(FGameplayTag ToggleGroup, FCurieToggleGroupSameStateSignature Delegate) {
}

void UFortCurieManager::BindDelegateOnToggleGroupFullyActive(FGameplayTag ToggleGroup, FCurieToggleGroupSameStateSignature Delegate) {
}

void UFortCurieManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortCurieManager, ValidStateIdentifiers);
}


