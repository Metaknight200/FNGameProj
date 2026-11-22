#include "AthenaAIDirector.h"
#include "EDespawnAIType.h"

AAthenaAIDirector::AAthenaAIDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DespawnAIType = EDespawnAIType::Distance;
    this->bUseLODSettings = true;
    this->bAsyncProcessUpdateAliveAIs = true;
    this->bAllowProcessPlayerTargeting = false;
}


