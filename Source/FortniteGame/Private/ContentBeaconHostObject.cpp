#include "ContentBeaconHostObject.h"
#include "ContentBeaconClient.h"

AContentBeaconHostObject::AContentBeaconHostObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("ContentBeaconClient");
    this->ClientBeaconActorClass = AContentBeaconClient::StaticClass();
}


