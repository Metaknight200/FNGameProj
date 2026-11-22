#include "FortAthenaLivingWorldVolume.h"

AFortAthenaLivingWorldVolume::AFortAthenaLivingWorldVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStartEnabled = true;
    this->DeactivationTagsRange = 55000.00f;
    this->EnvironmentQuery = NULL;
    this->bRemoveUsedPoint = false;
    this->CachedGameState = NULL;
}

void AFortAthenaLivingWorldVolume::SetEQSQueryConfigParam(const FName ParameterName, float Value) {
}

void AFortAthenaLivingWorldVolume::RunEQS() {
}

void AFortAthenaLivingWorldVolume::OnPointProviderRegistered(const TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>& PointProvider) {
}

void AFortAthenaLivingWorldVolume::OnCurrentPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

bool AFortAthenaLivingWorldVolume::IsPointProviderEnabled() const {
    return false;
}

void AFortAthenaLivingWorldVolume::EnablePointProvider() {
}

bool AFortAthenaLivingWorldVolume::DoesStartEnabled() const {
    return false;
}

void AFortAthenaLivingWorldVolume::DisablePointProvider() {
}


