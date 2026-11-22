#include "FortCurieBlueprintFunctionLibrary.h"

UFortCurieBlueprintFunctionLibrary::UFortCurieBlueprintFunctionLibrary() {
}

bool UFortCurieBlueprintFunctionLibrary::IsCurieEnabled() {
    return false;
}

bool UFortCurieBlueprintFunctionLibrary::IsCurieActive(UObject* WorldContextObject) {
    return false;
}

void UFortCurieBlueprintFunctionLibrary::IgniteGrassInBounds(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, FBox IgnitionBounds, int32 PropagationFuel) {
}

bool UFortCurieBlueprintFunctionLibrary::HasCurieStateAttached(AActor* Actor, FGameplayTag StateIdentifier) {
    return false;
}

bool UFortCurieBlueprintFunctionLibrary::HasCurieElementAttached(AActor* Actor, FGameplayTag ElementIdentifier) {
    return false;
}

AActor* UFortCurieBlueprintFunctionLibrary::GetLastElectricityPropagationParent(AActor* TargetActor) {
    return NULL;
}

void UFortCurieBlueprintFunctionLibrary::GetInstigatorInfoFromInteractParams(const FCurieInteractParamsHandle& InteractParamsHandle, AActor*& Instigator, AActor*& EffectCauser) {
}

void UFortCurieBlueprintFunctionLibrary::GetInstigatorInfoForAttachedElement(UObject* WorldContextObject, const FCurieContainerHandle& CurieContainerHandle, FGameplayTag ElementTag, AActor*& Instigator, AActor*& EffectCauser) {
}

UFortCurieManager* UFortCurieBlueprintFunctionLibrary::GetCurieManager(UObject* WorldContextObject) {
    return NULL;
}

FGameplayTagContainer UFortCurieBlueprintFunctionLibrary::GetAttachedCurieStates(AActor* Actor) {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UFortCurieBlueprintFunctionLibrary::GetAttachedCurieElements(AActor* Actor) {
    return FGameplayTagContainer{};
}

void UFortCurieBlueprintFunctionLibrary::ExtinguishGrassInBounds(UObject* WorldContextObject, FBox IgnitionBounds) {
}

void UFortCurieBlueprintFunctionLibrary::ExecuteWaterApplication(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, AActor* Target, float Magnitude, const FHitResult& HitResult, float LandscapeExtinguishRadius) {
}

void UFortCurieBlueprintFunctionLibrary::ExecuteFireApplication(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, AActor* Target, float Magnitude, const FHitResult& HitResult, int32 PropagationFuel, float LandscapeIgnitionRadius) {
}

bool UFortCurieBlueprintFunctionLibrary::ExecuteEndWaterInteract(UObject* WorldContextObject, AActor* Target, FCurieInteractHandle InteractHandle) {
    return false;
}

bool UFortCurieBlueprintFunctionLibrary::ExecuteEndFireInteract(UObject* WorldContextObject, AActor* Target, FCurieInteractHandle InteractHandle) {
    return false;
}

bool UFortCurieBlueprintFunctionLibrary::ExecuteEndElectricityInteract(UObject* WorldContextObject, AActor* Target, FCurieInteractHandle InteractHandle) {
    return false;
}

void UFortCurieBlueprintFunctionLibrary::ExecuteElectricityApplication(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, AActor* Target, float Magnitude, const FHitResult& HitResult, int32 PropagationDepthLimit) {
}

FCurieInteractHandle UFortCurieBlueprintFunctionLibrary::ExecuteBeginWaterInteract(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, AActor* Target, float Magnitude, const FHitResult& HitResult, float LandscapeExtinguishRadius) {
    return FCurieInteractHandle{};
}

FCurieInteractHandle UFortCurieBlueprintFunctionLibrary::ExecuteBeginFireInteract(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, AActor* Target, float Magnitude, const FHitResult& HitResult, int32 PropagationFuel, float LandscapeIgnitionRadius) {
    return FCurieInteractHandle{};
}

FCurieInteractHandle UFortCurieBlueprintFunctionLibrary::ExecuteBeginElectricityInteract(UObject* WorldContextObject, AActor* Instigator, AActor* EffectCauser, AActor* Target, float Magnitude, const FHitResult& HitResult, int32 PropagationDepthLimit) {
    return FCurieInteractHandle{};
}

void UFortCurieBlueprintFunctionLibrary::EnableStateAttachmentOnActor(AActor* TargetActor, FGameplayTag StateTag) {
}

void UFortCurieBlueprintFunctionLibrary::EnablePermanentElementSourceOnActor(AActor* TargetActor, FGameplayTag ElementTag) {
}

void UFortCurieBlueprintFunctionLibrary::EnableElementInteractionOnActor(AActor* TargetActor, FGameplayTag ElementTag) {
}

void UFortCurieBlueprintFunctionLibrary::EnableElementAttachmentOnActor(AActor* TargetActor, FGameplayTag ElementTag) {
}

void UFortCurieBlueprintFunctionLibrary::DisableStateAttachmentOnActor(AActor* TargetActor, FGameplayTag StateTag) {
}

void UFortCurieBlueprintFunctionLibrary::DisablePermanentElementSourceOnActor(AActor* TargetActor, FGameplayTag ElementTag) {
}

void UFortCurieBlueprintFunctionLibrary::DisableElementInteractionOnActor(AActor* TargetActor, FGameplayTag ElementTag) {
}

void UFortCurieBlueprintFunctionLibrary::DisableElementAttachmentOnActor(AActor* TargetActor, FGameplayTag ElementTag) {
}

void UFortCurieBlueprintFunctionLibrary::CurieProtoMeshExtraction(TArray<FVector>& LocalVertLocs, UStaticMeshComponent* MeshComponent, int32 LOD, int32 VertDivisor) {
}


