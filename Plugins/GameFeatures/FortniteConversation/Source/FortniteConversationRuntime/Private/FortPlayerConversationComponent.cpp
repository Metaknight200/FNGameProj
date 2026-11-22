#include "FortPlayerConversationComponent.h"

UFortPlayerConversationComponent::UFortPlayerConversationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DialogWidgetClass = NULL;
    this->DialogMarkerClass = NULL;
    this->GreetSphereRadius = 500.00f;
    this->IconVisibilityRadius = 5000.00f;
    this->AbortConversationRange = 20.00f;
}

void UFortPlayerConversationComponent::RequestServerAbortConversation_Implementation() {
}

void UFortPlayerConversationComponent::HandleWaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon) {
}

void UFortPlayerConversationComponent::HandleDBNOChanged(AFortPawn* Pawn, bool bIsDBNO) {
}

void UFortPlayerConversationComponent::ClientReceiveConversationGiftUINotification_Implementation(const FGiftUINotificationInfo& ConversationGiftUINotification) {
}


