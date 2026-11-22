#include "FortServerDebugActor.h"
#include "Net/UnrealNetwork.h"

AFortServerDebugActor::AFortServerDebugActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->ServerMemSharedInKb = 0;
    this->ServerMemUniqueInKb = 0;
    this->ServerMemVirtualInKb = 0;
    this->ServerMemPhysicalInKb = 0;
    this->SharedDeltaInLastMinute = 0;
    this->SharedDeltaSinceProcessStart = 0;
    this->SharedDeltaSinceDebugStart = 0;
    this->UniqueDeltaInLastMinute = 0;
    this->UniqueDeltaSinceProcessStart = 0;
    this->UniqueDeltaSinceDebugStart = 0;
}

void AFortServerDebugActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortServerDebugActor, ServerMemSharedInKb);
    DOREPLIFETIME(AFortServerDebugActor, ServerMemUniqueInKb);
    DOREPLIFETIME(AFortServerDebugActor, ServerMemVirtualInKb);
    DOREPLIFETIME(AFortServerDebugActor, ServerMemPhysicalInKb);
    DOREPLIFETIME(AFortServerDebugActor, SharedDeltaInLastMinute);
    DOREPLIFETIME(AFortServerDebugActor, SharedDeltaSinceProcessStart);
    DOREPLIFETIME(AFortServerDebugActor, SharedDeltaSinceDebugStart);
    DOREPLIFETIME(AFortServerDebugActor, UniqueDeltaInLastMinute);
    DOREPLIFETIME(AFortServerDebugActor, UniqueDeltaSinceProcessStart);
    DOREPLIFETIME(AFortServerDebugActor, UniqueDeltaSinceDebugStart);
}


