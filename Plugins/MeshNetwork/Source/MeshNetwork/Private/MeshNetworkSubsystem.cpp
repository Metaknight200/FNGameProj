#include "MeshNetworkSubsystem.h"
#include "Templates/SubclassOf.h"

UMeshNetworkSubsystem::UMeshNetworkSubsystem() {
    this->NodeType = EMeshNetworkNodeType::Unknown;
    this->GameServerNodeType = EMeshNetworkNodeType::Unknown;
    this->bConnectedToRoot = false;
    this->bMetadataReceived = false;
}

void UMeshNetworkSubsystem::SetMetaDataWithKey(FName Key, const FMeshMetaDataStruct& MetaData) {
}

void UMeshNetworkSubsystem::SetMetaData(const FMeshMetaDataStruct& MetaData) {
}

bool UMeshNetworkSubsystem::GetMetaDataWithKey(FName Key, FMeshMetaDataStruct& MetaData) {
    return false;
}

void UMeshNetworkSubsystem::GetMetaData(FMeshMetaDataStruct& MetaData) {
}

EMeshNetworkNodeType UMeshNetworkSubsystem::GetMeshNetworkNodeType() const {
    return EMeshNetworkNodeType::Root;
}

EMeshNetworkNodeType UMeshNetworkSubsystem::GetGameServerNodeType() const {
    return EMeshNetworkNodeType::Root;
}

bool UMeshNetworkSubsystem::GetConnectedToRoot() const {
    return bConnectedToRoot;
}

void UMeshNetworkSubsystem::EnableMeshReplication(AActor* Actor, TSubclassOf<UMeshNetworkComponent> MeshComponentClass) {
}

void UMeshNetworkSubsystem::DisableMeshReplication(AActor* Actor) {
}


