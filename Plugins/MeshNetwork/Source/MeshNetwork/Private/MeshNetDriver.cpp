#include "MeshNetDriver.h"

UMeshNetDriver::UMeshNetDriver() : UIpNetDriver(FObjectInitializer::Get()) {
    this->NetConnectionClassName = TEXT("/Script/MeshNetwork.MeshConnection");
    this->bNeverApplyNetworkEmulationSettings = true;
    this->ChannelDefinitions.AddDefaulted(4);
}


