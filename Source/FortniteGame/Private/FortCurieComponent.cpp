#include "FortCurieComponent.h"
#include "Net/UnrealNetwork.h"

UFortCurieComponent::UFortCurieComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LastElectricityPropagationParent = NULL;
    this->LastElectrifiedTime = 0.00f;
    this->LastFireFXRelatedStateTime = 0.00f;
    this->ActiveStateBitfield = 0;
    this->CableSocketComponent = NULL;
    this->TrackedNativeGlowFlags = EFortCurieNativeFXType::None;
}

void UFortCurieComponent::OnRep_ActiveStateBitfield() {
}

void UFortCurieComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortCurieComponent, LastElectricityPropagationParent);
    DOREPLIFETIME(UFortCurieComponent, LastElectrifiedTime);
    DOREPLIFETIME(UFortCurieComponent, LastFireFXRelatedStateTime);
    DOREPLIFETIME(UFortCurieComponent, ActiveStateBitfield);
}


