#include "FortTimeOfDayManager.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkyLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AFortTimeOfDayManager::AFortTimeOfDayManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    this->bAllowReceiveTickEventOnDedicatedServer = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MySceneComponent"));
    this->TimeOfDay = 6.00f;
    this->TimeOfDayReplicated = 6.00f;
    this->CurrentDayNightPhase = EFortDayPhase::Day;
    this->TransitionFromPhase = EFortDayPhase::Day;
    this->TransitionToPhase = EFortDayPhase::Day;
    this->TransitionBlendPercent = 0.00f;
    this->DefaultTimeOfDaySpeed = 60.00f;
    this->StartTimeOfDayInGame = 6.00f;
    this->TimeOfDaySpeed = 60.00f;
    this->MaxTimeOfDayAccumulationFactor = 5.00f;
    this->TimeOfDayAccumulator = 0.00f;
    this->BasePostProcessMaterial = NULL;
    this->PostProcessMaterialMID = NULL;
    this->bHasClonedPPVs = 0;
    this->bSkipNight = false;
    this->bUsePerDayPhaseSkylightCubemaps = false;
    this->bTimeStarted = false;
    this->bHeightFogEnabled = false;
    this->bBaseHeightFogOnAltitude = true;
    this->HeightFogZOffset = 0.00f;
    this->SunObjectDivergencePower = 5.00f;
    this->bUseSkyAtmosphereRotationAndDivergence = false;
    this->SkyAtmosphereRotationDivergencePower = 5.00f;
    this->DistanceToSunOrMoon = 7920000.00f;
    this->bStartInvisible = false;
    this->DirectionalLightComponent = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("DayNightDirectionalLightComponent"));
    this->ActiveHeightFogComponent = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("ActiveHeightFogComponent"));
    this->DayPhaseChangeEventParams = NULL;
    this->LightAndFogPhaseSettingOverrides[0] = NULL;
    this->LightAndFogPhaseSettingOverrides[1] = NULL;
    this->LightAndFogPhaseSettingOverrides[2] = NULL;
    this->LightAndFogPhaseSettingOverrides[3] = NULL;
    this->bBlendingInLightAndFogOverrides = false;
    this->bBlendingOutLightAndFogOverrides = false;
    this->BlendingOutLightAndFogOverridesDayPhase = EFortDayPhase::NumPhases;
    this->LightAndFogOverridesFadeTime = 0.00f;
    this->CurrentLightAndFogBlendValue = 0.00f;
    this->MorningPostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("MorningPostProcessComponent"));
    this->DayPostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("DayPostProcessComponent"));
    this->EveningPostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("EveningPostProcessComponent"));
    this->NightPostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("NightPostProcessComponent"));
    this->DayPhasePostProcessComponent[0] = (UPostProcessComponent*)MorningPostProcessComponent;
    this->DayPhasePostProcessComponent[1] = (UPostProcessComponent*)MorningPostProcessComponent;
    this->DayPhasePostProcessComponent[2] = (UPostProcessComponent*)MorningPostProcessComponent;
    this->DayPhasePostProcessComponent[3] = (UPostProcessComponent*)MorningPostProcessComponent;
    this->OverridePostProcessComponent = NULL;
    this->MaterialParameterCollection = NULL;
    this->MaterialParameterCollectionInstance = NULL;
    this->SunMesh = NULL;
    this->MoonMesh = NULL;
    this->SunScale = 1760.00f;
    this->MoonScale = 6160.00f;
    this->SkyDomeMaterial = NULL;
    this->StarMapMaterial = NULL;
    this->CloudMaskTexture = NULL;
    this->bUseStormValues = true;
    this->StormMaterialInst = NULL;
    this->SkyLightComp = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLightComponent"));
    this->RainParticleSystemComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RainParticleSystemComponent"));
    this->SunOrMoonMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SunMeshComponent"));
    this->SkyDomeMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SkyDomeMeshComp"));
    this->StarMapMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StarMapMeshComponent"));
    this->ActiveSkyBoxMat = NULL;
    this->StarMapMID = NULL;
    this->StormStrength = 0.00f;
    this->DefaultSkydomeMaterial = NULL;
    this->LastEnabledInhibitor = NULL;
    this->DisableGlobalWeatherEvents = false;
    this->WeatherComponent = NULL;
    this->ActiveHeightFogComponent->SetupAttachment(RootComponent);
    this->DayPhasePostProcessComponent[0]->SetupAttachment(RootComponent);
    this->DayPhasePostProcessComponent[1]->SetupAttachment(RootComponent);
    this->DayPhasePostProcessComponent[2]->SetupAttachment(RootComponent);
    this->DayPhasePostProcessComponent[3]->SetupAttachment(RootComponent);
    this->DayPostProcessComponent->SetupAttachment(RootComponent);
    this->DirectionalLightComponent->SetupAttachment(RootComponent);
    this->EveningPostProcessComponent->SetupAttachment(RootComponent);
    this->MorningPostProcessComponent->SetupAttachment(RootComponent);
    this->NightPostProcessComponent->SetupAttachment(RootComponent);
    this->RainParticleSystemComp->SetupAttachment(RootComponent);
    this->SkyDomeMeshComp->SetupAttachment(RootComponent);
    this->SkyLightComp->SetupAttachment(RootComponent);
    this->StarMapMeshComp->SetupAttachment(RootComponent);
    this->SunOrMoonMeshComp->SetupAttachment(RootComponent);
}

void AFortTimeOfDayManager::UpdateInhibitorLastModificationDate(const FInhibitorData& InhibitorData) {
}

void AFortTimeOfDayManager::UnregisterForDayPhaseChangedEvent(UObject* EventReceiver) {
}

void AFortTimeOfDayManager::TryToUpdateFogForInhibitors() {
}

void AFortTimeOfDayManager::ToggleSkipNight() {
}

void AFortTimeOfDayManager::ToggleDebugForceStormEffects() {
}

void AFortTimeOfDayManager::SetUseSpecificTimeOfDayEditing(bool bShouldUseSpecificTimeOfDay) {
}

void AFortTimeOfDayManager::SetTimeOfDaySpeedFloat(float InTimeOfDaySpeed) {
}

void AFortTimeOfDayManager::SetTimeOfDaySpeed(float TimeOfDaySpeedFactor) {
}

void AFortTimeOfDayManager::SetTimeOfDayManagerVisibility(bool bVisible) {
}

void AFortTimeOfDayManager::SetTimeOfDayInHours(float TimeOfDayInHours) {
}

void AFortTimeOfDayManager::SetTimeOfDayFloat(float TimeOfDayInHours) {
}

void AFortTimeOfDayManager::SetTimeOfDayAbsoluteSpeed(float NewTimeOfDaySpeed) {
}

void AFortTimeOfDayManager::SetTimeOfDay(const FString& NewTimeOfDay) {
}

void AFortTimeOfDayManager::SetStormStrength(float NewStormStrength) {
}

void AFortTimeOfDayManager::SetSpecificTimeOfDayInEditor(float NewTimeOfDayInEditor) {
}

void AFortTimeOfDayManager::SetPostProcessMaterialMIDEnabled(const bool bPostProcessEnabled) {
}

void AFortTimeOfDayManager::SetHeightFogEnabled(bool bSetHeightFogEnabled) {
}

void AFortTimeOfDayManager::SetFogDirectionalInscatteringMultiplier(float NewFogDirectionalInscatteringMultiplier) {
}

void AFortTimeOfDayManager::SetDirectionalLightComponentRotation(const FQuat& NewQuat, bool bInEditor, float DeltaTime) {
}

void AFortTimeOfDayManager::SetDirectionalLightColorMultiplier(float NewDirectionalLightColorMultiplier) {
}

void AFortTimeOfDayManager::SetDayPhase(const FString& DayPhase) {
}

void AFortTimeOfDayManager::RemoveLightAndFogPhaseSettingOverrideMulticast_Implementation(EFortDayPhase::Type DayPhase, float BlendOutLength) {
}

void AFortTimeOfDayManager::RemoveLightAndFogPhaseSettingOverride(TEnumAsByte<EFortDayPhase::Type> DayPhase, float BlendOutLength) {
}

void AFortTimeOfDayManager::RegisterForDayPhaseChangedEvent(FDayNightPhaseChangeBlueprintEventSignature DelegateSignature) {
}






void AFortTimeOfDayManager::OnRep_TimeOfDayInit() {
}

void AFortTimeOfDayManager::OnRep_TimeOfDay() {
}

void AFortTimeOfDayManager::OnRep_HeightFogEnabled() {
}

void AFortTimeOfDayManager::OnRep_DirectOverrides() {
}



FExponentialHeightFogValues AFortTimeOfDayManager::MakeExponentialHeightFogValues(float FogDensity, float FogHeightFalloff, float FogMaxOpacity, float StartDistance, float DirectionalInscatteringExponent, float DirectionalInscatteringStartDistance, FLinearColor DirectionalInscatteringColor, FLinearColor FogInscatteringColor, float VolumetricFogScatteringDistribution, float VolumetricFogExtinctionScale, float VolumetricFogDistance) {
    return FExponentialHeightFogValues{};
}

bool AFortTimeOfDayManager::IsThereAnyInhibitor() const {
    return false;
}

void AFortTimeOfDayManager::Inhibitor_SetDefaultSettings() {
}

AFortTimeOfDayManager* AFortTimeOfDayManager::GetTimeOfDayManagerFromContext(UObject* WorldContextObject) {
    return NULL;
}

TArray<FThreatLocationInfo> AFortTimeOfDayManager::GetThreatClouds() const {
    return TArray<FThreatLocationInfo>();
}

float AFortTimeOfDayManager::GetStormStrength() const {
    return StormStrength;
}

float AFortTimeOfDayManager::GetSafeZoneGamePhaseTimeRemaining() const {
    return 0.0f;
}

TEnumAsByte<EFortDayPhase::Type> AFortTimeOfDayManager::GetPreviousDayPhase() const {
    return EFortDayPhase::Morning;
}

float AFortTimeOfDayManager::GetDirectOverrideFogStartDistance() const {
    return 0.0f;
}

float AFortTimeOfDayManager::GetDirectOverrideFogDensity() const {
    return 0.0f;
}

FLinearColor AFortTimeOfDayManager::GetDirectOverrideFogColor() const {
    return FLinearColor{};
}

void AFortTimeOfDayManager::FFToTimeOfDay(float FastForwardTime, float FastForwardSpeed) {
}

void AFortTimeOfDayManager::FastForwardToTime_ByDuration(float FastForwardTimeOfDay, float FastForwardDuration, float RestoreSpeed) {
}

void AFortTimeOfDayManager::FastForwardToTime(float FastForwardTimeOfDay, float FastForwardSpeed, float RestoreSpeed) {
}

void AFortTimeOfDayManager::EndBlendLightAndFogPhaseSettingOverride() {
}

void AFortTimeOfDayManager::EnableVolumeInhibitor(const FInhibitorData& InhibitorData) {
}

void AFortTimeOfDayManager::EnableGlobalInhibitor(const FInhibitorData& InhibitorData) {
}

void AFortTimeOfDayManager::DisableVolumeInhibitor(const FInhibitorData& InhibitorData) {
}

void AFortTimeOfDayManager::DisableGlobalInhibitor(const FInhibitorData& InhibitorData) {
}

void AFortTimeOfDayManager::BreakExponentialHeightFogValues(FExponentialHeightFogValues HeightFogValues, float& FogDensity, float& FogHeightFalloff, float& FogMaxOpacity, float& StartDistance, float& DirectionalInscatteringExponent, float& DirectionalInscatteringStartDistance, FLinearColor& DirectionalInscatteringColor, FLinearColor& FogInscatteringColor, float& VolumetricFogScatteringDistribution, float& VolumetricFogExtinctionScale, float& VolumetricFogDistance) {
}

void AFortTimeOfDayManager::BlendLightAndFogPhaseSettingOverride(float Alpha) {
}

void AFortTimeOfDayManager::ApplyFogOverrides(const FTimeOfDayDirectOverrides& NewDirectOverrides) {
}

void AFortTimeOfDayManager::ApplyDirectOverrides(const FTimeOfDayDirectOverrides& NewDirectOverrides) {
}

void AFortTimeOfDayManager::AddLightAndFogPhaseSettingOverrideMulticast_Implementation(EFortDayPhase::Type DayPhase, TSubclassOf<UFortDayPhaseInfoOverride> DayPhaseInfoOverride, float BlendInLength) {
}

void AFortTimeOfDayManager::AddLightAndFogPhaseSettingOverride(TEnumAsByte<EFortDayPhase::Type> DayPhase, TSubclassOf<UFortDayPhaseInfoOverride> DayPhaseInfoOverride, float BlendInLength) {
}

void AFortTimeOfDayManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortTimeOfDayManager, TimeOfDay);
    DOREPLIFETIME(AFortTimeOfDayManager, TimeOfDayReplicated);
    DOREPLIFETIME(AFortTimeOfDayManager, TimeOfDaySpeed);
    DOREPLIFETIME(AFortTimeOfDayManager, bTimeStarted);
    DOREPLIFETIME(AFortTimeOfDayManager, bHeightFogEnabled);
    DOREPLIFETIME(AFortTimeOfDayManager, DirectOverrides);
    DOREPLIFETIME(AFortTimeOfDayManager, WeatherComponent);
}


