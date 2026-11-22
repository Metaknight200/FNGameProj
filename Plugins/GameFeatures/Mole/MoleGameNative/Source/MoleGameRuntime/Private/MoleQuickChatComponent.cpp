#include "MoleQuickChatComponent.h"
#include "Net/UnrealNetwork.h"

UMoleQuickChatComponent::UMoleQuickChatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinimumTimeBetweenSend = 0.50f;
}

void UMoleQuickChatComponent::ServerSendMessage_Implementation(const FMoleQuickChatMessageInfo& Message) {
}
bool UMoleQuickChatComponent::ServerSendMessage_Validate(const FMoleQuickChatMessageInfo& Message) {
    return true;
}

void UMoleQuickChatComponent::OnRep_MessageInfo() {
}

void UMoleQuickChatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMoleQuickChatComponent, MessageInfo);
}


