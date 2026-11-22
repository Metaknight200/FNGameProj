#include "SkyfireAudioManager.h"

ASkyfireAudioManager::ASkyfireAudioManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->SkyfireMutator = NULL;
}











AFortAthenaMutator_Skyfire* ASkyfireAudioManager::GetSkyfireMutator() const {
    return NULL;
}


