#include "FortControllerComponent_SpecialEvent.h"

UFortControllerComponent_SpecialEvent::UFortControllerComponent_SpecialEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFortControllerComponent_SpecialEvent::ServerHandleSpecialClientEvent_Implementation(const FGameplayTag& EventTag, const int32 Count) {
}

void UFortControllerComponent_SpecialEvent::SendSpecialClientEvent(const FGameplayTag EventTag, const int32 Count) {
}


