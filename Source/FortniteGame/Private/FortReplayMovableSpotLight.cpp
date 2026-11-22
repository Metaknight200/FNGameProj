#include "FortReplayMovableSpotLight.h"
#include "Components/SpotLightComponent.h"
#include "Net/UnrealNetwork.h"

AFortReplayMovableSpotLight::AFortReplayMovableSpotLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRelevantForNetworkReplays = false;
    this->SpotLightComp = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight0"));
    this->bGroupMoveLocked = false;
    this->LightIndex = 0;
    this->RepInnerAngle = 0.00f;
    this->RepOuterAngle = 44.00f;
    this->RepIntensity = 5000.00f;
    this->RepRadius = 1000.00f;
    this->RepColorR = 255;
    this->RepColorG = 255;
    this->RepColorB = 255;
    this->RepTemperature = 6500.00f;
    this->bRepEnabled = true;
    this->bDebugDraw = false;
    this->SpotLightComp->SetupAttachment(RootComponent);
}

void AFortReplayMovableSpotLight::OnRep_RepTemperature() {
}

void AFortReplayMovableSpotLight::OnRep_RepRadius() {
}

void AFortReplayMovableSpotLight::OnRep_RepOuterAngle() {
}

void AFortReplayMovableSpotLight::OnRep_RepIntensity() {
}

void AFortReplayMovableSpotLight::OnRep_RepInnerAngle() {
}

void AFortReplayMovableSpotLight::OnRep_RepEnabled() {
}

void AFortReplayMovableSpotLight::OnRep_RepColor() {
}

void AFortReplayMovableSpotLight::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortReplayMovableSpotLight, bGroupMoveLocked);
    DOREPLIFETIME(AFortReplayMovableSpotLight, LightIndex);
    DOREPLIFETIME(AFortReplayMovableSpotLight, RepInnerAngle);
    DOREPLIFETIME(AFortReplayMovableSpotLight, RepOuterAngle);
    DOREPLIFETIME(AFortReplayMovableSpotLight, RepIntensity);
    DOREPLIFETIME(AFortReplayMovableSpotLight, RepRadius);
    DOREPLIFETIME(AFortReplayMovableSpotLight, RepColorR);
    DOREPLIFETIME(AFortReplayMovableSpotLight, RepColorG);
    DOREPLIFETIME(AFortReplayMovableSpotLight, RepColorB);
    DOREPLIFETIME(AFortReplayMovableSpotLight, RepTemperature);
    DOREPLIFETIME(AFortReplayMovableSpotLight, bRepEnabled);
    DOREPLIFETIME(AFortReplayMovableSpotLight, bDebugDraw);
}


