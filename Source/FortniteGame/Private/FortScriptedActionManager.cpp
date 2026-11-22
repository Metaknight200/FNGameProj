#include "FortScriptedActionManager.h"

AFortScriptedActionManager::AFortScriptedActionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsProcessingClientEvent = false;
}

void AFortScriptedActionManager::HandleClientEvent_Undefined(UObject* EventSource, UObject* EventFocus, const FFortClientEvent& ClientEvent) {
}


