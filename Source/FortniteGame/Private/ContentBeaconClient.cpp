#include "ContentBeaconClient.h"
#include "Net/UnrealNetwork.h"

AContentBeaconClient::AContentBeaconClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClientContentReadiness = EClientContentReadiness::NotConnected;
    this->bHostActivatedContent = false;
    this->bShouldErrorOnAdditionalContentFailure = false;
}

void AContentBeaconClient::ServerUnloadManifestContentComplete_Implementation() {
}
bool AContentBeaconClient::ServerUnloadManifestContentComplete_Validate() {
    return true;
}

void AContentBeaconClient::ServerStartingContentUnload_Implementation(const FString& PluginURL) {
}
bool AContentBeaconClient::ServerStartingContentUnload_Validate(const FString& PluginURL) {
    return true;
}

void AContentBeaconClient::ServerFinishedActivatingContent_Implementation(bool bSuccess) {
}
bool AContentBeaconClient::ServerFinishedActivatingContent_Validate(bool bSuccess) {
    return true;
}

void AContentBeaconClient::ServerFinishDisconnect_Implementation() {
}
bool AContentBeaconClient::ServerFinishDisconnect_Validate() {
    return true;
}

void AContentBeaconClient::ServerCheckAdditionalContentIsRequired_Implementation(const FString& ClientConsumerFilterPlatform) {
}
bool AContentBeaconClient::ServerCheckAdditionalContentIsRequired_Validate(const FString& ClientConsumerFilterPlatform) {
    return true;
}

void AContentBeaconClient::OnRep_ShouldErrorOnAdditionalContentFailure() {
}

void AContentBeaconClient::OnRep_HostActivatedContent() {
}

void AContentBeaconClient::OnRep_ClientAdditionalContentBundles() {
}

void AContentBeaconClient::ClientUnloadManifestContent_Implementation(const TArray<FString>& PluginURls) {
}

void AContentBeaconClient::ClientNotifyDisconnect_Implementation() {
}

void AContentBeaconClient::ClientAdditionalConentIsRequiredCheckComplete_Implementation(bool bAdditionalContentRequired) {
}

void AContentBeaconClient::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AContentBeaconClient, ContentMessagesArray);
    DOREPLIFETIME(AContentBeaconClient, ClientContentModules);
    DOREPLIFETIME(AContentBeaconClient, bHostActivatedContent);
    DOREPLIFETIME(AContentBeaconClient, bShouldErrorOnAdditionalContentFailure);
}


