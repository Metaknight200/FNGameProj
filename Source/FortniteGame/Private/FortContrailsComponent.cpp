#include "FortContrailsComponent.h"

UFortContrailsComponent::UFortContrailsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysShowContrails = false;
    this->bIsFrontend = false;
    this->ContrailsDefinition = NULL;
    this->ContrailFXAsset = NULL;
    this->VaporEmitterTemplate = NULL;
    this->ContrailFXComp = NULL;
    this->VaporFXComp = NULL;
    this->PoolingMethod = EPSCPoolMethod::None;
    this->VelocityInRangeMin = 1200.00f;
    this->VelocityInRangeMax = 3300.00f;
    this->NiagaraParamsOutRangeMin = 0.00f;
    this->NiagaraParamsOutRangeMax = 1.00f;
    this->TrailAlphaOutRangeMin = 0.10f;
    this->TrailAlphaOutRangeMax = 0.70f;
    this->TrailWidthOutRangeMin = 0.75f;
    this->TrailWidthOutRangeMax = 1.25f;
}

void UFortContrailsComponent::SetupContrails(UAthenaSkyDiveContrailItemDefinition* Contrails, TSoftObjectPtr<UFXSystemAsset> ContrailsFXOverride, bool bFrontend, float ActivateDelay) {
}

void UFortContrailsComponent::HandleLanded(const FHitResult& Hit) {
}

void UFortContrailsComponent::HandleEndSkydiving() {
}

void UFortContrailsComponent::HandleEndParachuteMovement() {
}

void UFortContrailsComponent::HandleBeginSkydiving() {
}

void UFortContrailsComponent::HandleBeginParachuteMovement() {
}


