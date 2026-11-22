#include "FortPoiManager.h"
#include "Net/UnrealNetwork.h"

AFortPoiManager::AFortPoiManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_DormantAll;
    this->TestPlayerIndex = 0;
    this->MaxNumTestsPerFrame = 5;
    this->PoiTagContainerTableSize = -1;
    this->bIsReinitializingGrid = false;
    this->bHasInitalized = false;
    this->PoiGridPrevSizeForDebugDisplay = 0;
}

void AFortPoiManager::OnRep_PoiTagContainerTable() {
}

void AFortPoiManager::OnRep_PoiGridForDebugDisplay() {
}

void AFortPoiManager::OnRep_FortPoiGridInfo() {
}

void AFortPoiManager::ClientsideMinimalInitPostEventsReady(const TArray<FString>& NewEvents) {
}

void AFortPoiManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPoiManager, FortPoiGridInfo);
    DOREPLIFETIME(AFortPoiManager, PoiTagContainerTable);
    DOREPLIFETIME(AFortPoiManager, PoiTagContainerTableSize);
    DOREPLIFETIME(AFortPoiManager, PoiGridForDebugDisplay);
}


