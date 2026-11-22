#include "FortForcedLODZone.h"
#include "Components/BoxComponent.h"

AFortForcedLODZone::AFortForcedLODZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("LODTriggerBox"));
    this->ForcedLODLevel = EFortAILODLevel::BelowNormal;
}


