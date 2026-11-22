#include "FortTimeOfDayWeatherComponent.h"
#include "Net/UnrealNetwork.h"

UFortTimeOfDayWeatherComponent::UFortTimeOfDayWeatherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bWeatherDisabled = false;
    this->GamePhaseToStart = EAthenaGamePhase::SafeZones;
    this->bWeatherStarted = false;
    this->WeatherState = EGlobalWeatherState::Inactive;
    this->WeatherEventEndTime = -1.00f;
    this->WeatherEventAttemptStart = 340282346638528859811704183484516925440.00f;
    this->WeatherEventIndex = -1;
    this->LocalWeatherEventIndex = -1;
    this->CurrentWeatherEventIntensity = 0.00f;
    this->CurrentBlendTime = -1.00f;
    this->TargetBlendTime = -1.00f;
    this->BlendTimeLength = -1.00f;
    this->PostProcessComponent = NULL;
}

void UFortTimeOfDayWeatherComponent::OnRep_WeatherEventIndex() {
}

void UFortTimeOfDayWeatherComponent::OnRep_CurrentWeatherEventIntensity() {
}

void UFortTimeOfDayWeatherComponent::OnPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

bool UFortTimeOfDayWeatherComponent::IsWeatherEventActive() const {
    return false;
}

EGlobalWeatherState UFortTimeOfDayWeatherComponent::GetWeatherState() const {
    return EGlobalWeatherState::Inactive;
}

float UFortTimeOfDayWeatherComponent::GetCurrentWindStrength() const {
    return 0.0f;
}

FVector UFortTimeOfDayWeatherComponent::GetCurrentWindDirection() const {
    return FVector{};
}

float UFortTimeOfDayWeatherComponent::GetCurrentWeatherIntensity() const {
    return 0.0f;
}

int32 UFortTimeOfDayWeatherComponent::GetCurrentWeatherEventIndex() const {
    return 0;
}

float UFortTimeOfDayWeatherComponent::GetBlendTimePercentage() const {
    return 0.0f;
}

void UFortTimeOfDayWeatherComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortTimeOfDayWeatherComponent, WeatherEventIndex);
    DOREPLIFETIME(UFortTimeOfDayWeatherComponent, CurrentWeatherEventIntensity);
}


