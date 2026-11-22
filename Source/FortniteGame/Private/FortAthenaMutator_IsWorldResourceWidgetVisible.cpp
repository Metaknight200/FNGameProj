#include "FortAthenaMutator_IsWorldResourceWidgetVisible.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_IsWorldResourceWidgetVisible::AFortAthenaMutator_IsWorldResourceWidgetVisible(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->bWoodResourceWidgetVisible = true;
    this->bStoneResourceWidgetVisible = true;
    this->bMetalResourceWidgetVisible = true;
    this->bGoldCurrencyResourceWidgetVisible = false;
}

void AFortAthenaMutator_IsWorldResourceWidgetVisible::OnRep_bWoodResourceWidgetVisible() {
}

void AFortAthenaMutator_IsWorldResourceWidgetVisible::OnRep_bStoneResourceWidgetVisible() {
}

void AFortAthenaMutator_IsWorldResourceWidgetVisible::OnRep_bMetalResourceWidgetVisible() {
}

void AFortAthenaMutator_IsWorldResourceWidgetVisible::OnRep_bGoldCurrencyResourceWidgetVisible() {
}

void AFortAthenaMutator_IsWorldResourceWidgetVisible::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_IsWorldResourceWidgetVisible, bWoodResourceWidgetVisible);
    DOREPLIFETIME(AFortAthenaMutator_IsWorldResourceWidgetVisible, bStoneResourceWidgetVisible);
    DOREPLIFETIME(AFortAthenaMutator_IsWorldResourceWidgetVisible, bMetalResourceWidgetVisible);
    DOREPLIFETIME(AFortAthenaMutator_IsWorldResourceWidgetVisible, bGoldCurrencyResourceWidgetVisible);
}


