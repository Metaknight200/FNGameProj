#include "FortNPCConversationParticipantComponent.h"
#include "EFortQuestObjectiveStatEvent.h"
#include "Net/UnrealNetwork.h"

UFortNPCConversationParticipantComponent::UFortNPCConversationParticipantComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowNameWhenInRange = true;
    this->bShowIndicatorBubble = true;
    this->bShowConversationText = true;
    this->InitiateConversationStatEventType = EFortQuestObjectiveStatEvent::InitiatedNPCConversation;
    this->bCanStartConversation = false;
    this->bConversationModeActive = false;
    this->PlayerPawnOwner = NULL;
    this->BotControllerOwner = NULL;
    this->AffiliationManager = NULL;
    this->ConversationRuntimeParameters = NULL;
    this->ConversationInteractionCollisionProfile = TEXT("FortTriggerOnlyInteractions");
    this->InteractCollisionComponent = NULL;
    this->CharacterData = NULL;
    this->NPCAnimLayer = NULL;
    this->bTriggerGiftOnFirstConversationEnabled = true;
}

void UFortNPCConversationParticipantComponent::OnRep_ConversationModeActive() {
}

void UFortNPCConversationParticipantComponent::OnRep_CanStartConversation() {
}

void UFortNPCConversationParticipantComponent::OnPlayerPawnOwnerDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void UFortNPCConversationParticipantComponent::OnBotControllerDBNOStatusChanged(AFortAthenaAIBotController* BotController, bool bIsDBNO) {
}

void UFortNPCConversationParticipantComponent::OnBotControllerAlertLevelChanged(AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel) {
}

UFortTandemCharacterData* UFortNPCConversationParticipantComponent::GetCharacterData() const {
    return CharacterData;
}

void UFortNPCConversationParticipantComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortNPCConversationParticipantComponent, bCanStartConversation);
    DOREPLIFETIME(UFortNPCConversationParticipantComponent, bConversationModeActive);
    DOREPLIFETIME(UFortNPCConversationParticipantComponent, ConversationInteractionCollisionProfile);
    DOREPLIFETIME(UFortNPCConversationParticipantComponent, ConversationInteractionBoxExtent);
    DOREPLIFETIME(UFortNPCConversationParticipantComponent, ConversationInteractionBoxOffset);
}


