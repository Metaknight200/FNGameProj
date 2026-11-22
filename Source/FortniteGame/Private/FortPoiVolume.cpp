#include "FortPoiVolume.h"
#include "FortPoiCollisionComponent.h"

AFortPoiVolume::AFortPoiVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsLargeGameVolume = false;
    this->CurrentFortPoiVolumeSize = 0.00f;
    this->VolumeThresholdForLargeGameVolume = 0.00f;
    this->LargeGameVolume = 9000.00f;
    this->AudioBank = NULL;
    this->PoiCollisionComp = CreateDefaultSubobject<UFortPoiCollisionComponent>(TEXT("TestPrimComp0"));
    this->PoiCollisionComp->SetupAttachment(RootComponent);
}

bool AFortPoiVolume::DoesShapeComponentOverlap(UShapeComponent* Shape) {
    return false;
}

bool AFortPoiVolume::ContainsLocationTag(const FGameplayTag& Tag) const {
    return false;
}

void AFortPoiVolume::CalendarEventsShouldBeReady(const TArray<FString>& NewEvents) {
}


