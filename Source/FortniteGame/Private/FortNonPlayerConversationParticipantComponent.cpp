#include "FortNonPlayerConversationParticipantComponent.h"
#include "Net/UnrealNetwork.h"

UFortNonPlayerConversationParticipantComponent::UFortNonPlayerConversationParticipantComponent(const FObjectInitializer& ObjectInitializer) : Super() {
    this->bShowNameWhenInRange = false;
    this->bShowIndicatorBubble = false;
    this->bShowConversationText = false;
    this->InitiateConversationStatEventType = EFortQuestObjectiveStatEvent::Max_None;
    this->Gifts = NULL;
    this->GiftTypeDefinitions = NULL;
    this->GiftItemInventory = NULL;
    this->MaxServices = 5;
    this->Services = NULL;
    this->SalesInventory = NULL;
    this->bQuestsRequireProviderTagMatch = true;
    this->MaxQuestsToSupportFromSingleProvider = -1;
    this->bOverrideParticipantDisplayName = false;
    this->bOverrideRelativeLocation = false;
    this->bOverrideMaxDrawDistance = false;
    this->MaxDrawDistanceOverride = 2500.00f;
    this->CustomDialogMarkerClass = NULL;
    this->ResolvedGiftTypeDefinitions = NULL;
    this->bServiceDataInitialized = false;
}

void UFortNonPlayerConversationParticipantComponent::StartConversation(const FGameplayTag InConversationEntryTag, AActor* Instigator, AActor* Target) const {
}

void UFortNonPlayerConversationParticipantComponent::RemoveHideUIIndicatorReason(const FName& Reason) {
}

bool UFortNonPlayerConversationParticipantComponent::HasHideUIIndicatorReasons() const {
    return false;
}

bool UFortNonPlayerConversationParticipantComponent::CanStartConversationWith(const AFortPlayerController* PlayerController) const {
    return false;
}

void UFortNonPlayerConversationParticipantComponent::AddHideUIIndicatorReason(const FName& Reason) {
}

void UFortNonPlayerConversationParticipantComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortNonPlayerConversationParticipantComponent, ConversationEntryTag);
    DOREPLIFETIME(UFortNonPlayerConversationParticipantComponent, InteractorParticipantTag);
    DOREPLIFETIME(UFortNonPlayerConversationParticipantComponent, SelfParticipantTag);
    DOREPLIFETIME(UFortNonPlayerConversationParticipantComponent, ServiceProviderIDTag);
    DOREPLIFETIME(UFortNonPlayerConversationParticipantComponent, bShowNameWhenInRange);
    DOREPLIFETIME(UFortNonPlayerConversationParticipantComponent, bShowIndicatorBubble);
    DOREPLIFETIME(UFortNonPlayerConversationParticipantComponent, bShowConversationText);
}


