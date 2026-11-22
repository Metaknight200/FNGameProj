#include "FortFeedbackManager.h"
#include "Net/UnrealNetwork.h"

AFortFeedbackManager::AFortFeedbackManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bUsesStWFeedbackEvents = true;
    this->AnnouncerPawnClass = NULL;
    this->Announcer = NULL;
}

void AFortFeedbackManager::SuppressProceduralFeedback(TArray<AController*> ControllersToSuppress) {
}

AFortFeedbackManager* AFortFeedbackManager::GetFeedbackManager(UObject* WorldContextObject) {
    return NULL;
}

AFortPawn_FeedbackAnnouncer* AFortFeedbackManager::GetAnnouncerPawn(UObject* WorldContextObject) {
    return NULL;
}

void AFortFeedbackManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortFeedbackManager, Announcer);
    DOREPLIFETIME(AFortFeedbackManager, SuppressedControllers);
}


