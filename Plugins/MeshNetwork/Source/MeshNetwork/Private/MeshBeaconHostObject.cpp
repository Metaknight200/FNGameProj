#include "MeshBeaconHostObject.h"
#include "MeshBeaconClient.h"

AMeshBeaconHostObject::AMeshBeaconHostObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("MeshBeaconClient");
    this->ClientBeaconActorClass = AMeshBeaconClient::StaticClass();
}


