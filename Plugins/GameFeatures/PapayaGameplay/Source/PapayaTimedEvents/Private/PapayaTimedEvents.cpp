#include "PapayaTimedEvents.h"
#include "Net/UnrealNetwork.h"
#include "PapayaTimedEventsResponderComponent.h"

APapayaTimedEvents::APapayaTimedEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->MeshEventResponder = CreateDefaultSubobject<UPapayaTimedEventsResponderComponent>(TEXT("PapayaTimedEventsResponder"));
    this->ScreenName = TEXT("---");
}

void APapayaTimedEvents::ShutdownTimedEvents_Native() {
}

void APapayaTimedEvents::SetupTimedEvents_Native(const FString& NewScreenName) {
}

void APapayaTimedEvents::ResetTimedEvents_Native() {
}

void APapayaTimedEvents::OnRep_TimedEventsArray(const FMediaTimeEventArray& PreviousValue) {
}

void APapayaTimedEvents::OnRep_ScreenName(const FString& PreviousValue) {
}

void APapayaTimedEvents::AddTimedEvent_Native(const FString& EventName, int64 Time, const FString& EventParam) {
}

void APapayaTimedEvents::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APapayaTimedEvents, TimedEventsArray);
    DOREPLIFETIME(APapayaTimedEvents, ScreenName);
}


