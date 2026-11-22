#include "CreativeBlueprintLibrary.h"

UCreativeBlueprintLibrary::UCreativeBlueprintLibrary() {
}

void UCreativeBlueprintLibrary::UpdateInGameMapHeatmapTexture(const UObject* WorldContextObject) {
}

TArray<FVector> UCreativeBlueprintLibrary::SegmentSphereIntersection(const FVector& SegmentStart, const FVector& SegmentEnd, const FVector& SphereOrigin, const float SphereRadius) {
    return TArray<FVector>();
}

TArray<FVector> UCreativeBlueprintLibrary::SegmentCylinderIntersection(const FVector& SegmentStart, const FVector& SegmentEnd, const FVector& CylinderOrigin, const float CylinderRadius) {
    return TArray<FVector>();
}

void UCreativeBlueprintLibrary::LogHUDMessageWarning(const FString& inString) {
}

void UCreativeBlueprintLibrary::LogCreativeStreamingMessage(const FString& Message) {
}

bool UCreativeBlueprintLibrary::IsWhiteListedItemDefinition(const UFortItemDefinition* ItemDefinition) {
    return false;
}

bool UCreativeBlueprintLibrary::IsUseRestrictionComponentDebuggingEnabled() {
    return false;
}

bool UCreativeBlueprintLibrary::IsBlackListedItemDefinition(const AFortVolumeManager* VolumeManager, const UFortItemDefinition* ItemDefinition) {
    return false;
}

FName UCreativeBlueprintLibrary::GetNameFromCollisionProfile(FCollisionProfileName InCollisionProfile) {
    return NAME_None;
}

UFortMinigameManager* UCreativeBlueprintLibrary::GetMinigameManager(AController* Controller, ESubGame SubGame) {
    return NULL;
}

FFortCreativeAnimateFloatCurveResult UCreativeBlueprintLibrary::AnimateFloatCurve(const float DeltaTime, float& CurrentTime, UCurveFloat* FCurve, const float TotalAnimationTime, const bool bInvertTime) {
    return FFortCreativeAnimateFloatCurveResult{};
}


