#include "MeshBeaconHost.h"

AMeshBeaconHost::AMeshBeaconHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDriverName = TEXT("MeshNetDriverHost");
    this->MaxConnections = 200;
}


