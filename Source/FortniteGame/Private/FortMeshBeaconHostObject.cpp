#include "FortMeshBeaconHostObject.h"
#include "FortMeshBeaconClient.h"

AFortMeshBeaconHostObject::AFortMeshBeaconHostObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("FortMeshBeaconClient");
    this->ClientBeaconActorClass = AFortMeshBeaconClient::StaticClass();
}


