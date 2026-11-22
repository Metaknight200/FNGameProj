#include "FortAIDirectorDataManager.h"

AFortAIDirectorDataManager::AFortAIDirectorDataManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerObject = NULL;
}

void AFortAIDirectorDataManager::TriggerEvent(const FFortAIDirectorEvent& TriggeredEvent) {
}

float AFortAIDirectorDataManager::GetAIDirectorFactorValue(EFortAIDirectorFactor AIDirectorFactor) const {
    return 0.0f;
}


