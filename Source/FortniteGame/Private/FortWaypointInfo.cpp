#include "FortWaypointInfo.h"
#include "Net/UnrealNetwork.h"

AFortWaypointInfo::AFortWaypointInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Spline = NULL;
}

void AFortWaypointInfo::OnRep_SplineLocations() {
}

bool AFortWaypointInfo::IsStartingWaypoint(ABuildingTrapFloor_Waypoint* Waypoint) {
    return false;
}

bool AFortWaypointInfo::IsEndingWaypoint(ABuildingTrapFloor_Waypoint* Waypoint) {
    return false;
}

void AFortWaypointInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWaypointInfo, SplineLocations);
    DOREPLIFETIME(AFortWaypointInfo, ContextArray);
}


