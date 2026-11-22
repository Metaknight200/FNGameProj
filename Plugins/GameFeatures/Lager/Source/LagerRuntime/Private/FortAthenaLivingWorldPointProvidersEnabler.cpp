#include "FortAthenaLivingWorldPointProvidersEnabler.h"

AFortAthenaLivingWorldPointProvidersEnabler::AFortAthenaLivingWorldPointProvidersEnabler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AFortAthenaLivingWorldPointProvidersEnabler::RemoveClosestPointProvidersToPoint(const FVector& Point, const float MaximumDistance, const int32 PointsToDisable) {
}

void AFortAthenaLivingWorldPointProvidersEnabler::OnCurrentPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

bool AFortAthenaLivingWorldPointProvidersEnabler::HasCompletedEvaluation() const {
    return false;
}

FGameplayTagContainer AFortAthenaLivingWorldPointProvidersEnabler::GetEnablerTags() const {
    return FGameplayTagContainer{};
}

TArray<TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>> AFortAthenaLivingWorldPointProvidersEnabler::GetEnabledLinkedPointProviders() const {
    return TArray<TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>>();
}

void AFortAthenaLivingWorldPointProvidersEnabler::EvaluateAndEnablePointProviders() {
}

bool AFortAthenaLivingWorldPointProvidersEnabler::DoesStartEnabled() const {
    return false;
}


