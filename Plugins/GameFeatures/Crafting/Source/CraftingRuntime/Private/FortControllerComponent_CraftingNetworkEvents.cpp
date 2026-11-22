#include "FortControllerComponent_CraftingNetworkEvents.h"

UFortControllerComponent_CraftingNetworkEvents::UFortControllerComponent_CraftingNetworkEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFortControllerComponent_CraftingNetworkEvents::ServerStartCrafting_Implementation(AActor* CraftingObject, const FName& CraftingFormulaName) {
}
bool UFortControllerComponent_CraftingNetworkEvents::ServerStartCrafting_Validate(AActor* CraftingObject, const FName& CraftingFormulaName) {
    return true;
}

void UFortControllerComponent_CraftingNetworkEvents::ServerReportCraftingSuccess_Implementation(AActor* CraftingObject) {
}
bool UFortControllerComponent_CraftingNetworkEvents::ServerReportCraftingSuccess_Validate(AActor* CraftingObject) {
    return true;
}

void UFortControllerComponent_CraftingNetworkEvents::ServerPickupItemAndStartCrafting_Implementation(AActor* CraftingObject, AFortPickup* PickUp, const FName& CraftingFormulaName) {
}
bool UFortControllerComponent_CraftingNetworkEvents::ServerPickupItemAndStartCrafting_Validate(AActor* CraftingObject, AFortPickup* PickUp, const FName& CraftingFormulaName) {
    return true;
}

void UFortControllerComponent_CraftingNetworkEvents::ServerEjectItems_Implementation(AActor* CraftingObject) {
}
bool UFortControllerComponent_CraftingNetworkEvents::ServerEjectItems_Validate(AActor* CraftingObject) {
    return true;
}

void UFortControllerComponent_CraftingNetworkEvents::ServerClaimCraftingResults_Implementation(AActor* CraftingObject) {
}
bool UFortControllerComponent_CraftingNetworkEvents::ServerClaimCraftingResults_Validate(AActor* CraftingObject) {
    return true;
}

void UFortControllerComponent_CraftingNetworkEvents::ServerCancelCrafting_Implementation(AActor* CraftingObject) {
}
bool UFortControllerComponent_CraftingNetworkEvents::ServerCancelCrafting_Validate(AActor* CraftingObject) {
    return true;
}

void UFortControllerComponent_CraftingNetworkEvents::NotifyCraftingSuccess(AActor* CraftingObject, const FName& FormulaRowName) {
}

void UFortControllerComponent_CraftingNetworkEvents::ClientNotifyCraftingSuccess_Implementation(AActor* CraftingObject, const FName& FormulaRowName) {
}

void UFortControllerComponent_CraftingNetworkEvents::ClientNotifyCraftingFailed_Implementation(AActor* CraftingObject, const FGameplayTagContainer& FailedReason) {
}


