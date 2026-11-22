#include "FortCreativeRealEstatePlotManager.h"
#include "Net/UnrealNetwork.h"

AFortCreativeRealEstatePlotManager::AFortCreativeRealEstatePlotManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

void AFortCreativeRealEstatePlotManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortCreativeRealEstatePlotManager, ActiveCreativeRealEstatePlots);
}


