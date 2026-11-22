#include "FortPlayerMarkerBase.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AFortPlayerMarkerBase::AFortPlayerMarkerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MID_Main = NULL;
    this->MID_Target = NULL;
    this->CustomMarkerItemDefinition = NULL;
    this->SpawnMarkerAnimLength = 1.00f;
    this->SpawnMarkerAnim_Opacity = NULL;
    this->SpawnMarkerAnim_SpawnScale = NULL;
    this->SpawnMarkerAnim_SpawnVerticalScale = NULL;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}

void AFortPlayerMarkerBase::StartSpawnMarkerAnim() {
}

void AFortPlayerMarkerBase::SpawnMarkerAnimTimelineProgress_SpawnVerticalScale(float Value) {
}

void AFortPlayerMarkerBase::SpawnMarkerAnimTimelineProgress_SpawnScale(float Value) {
}

void AFortPlayerMarkerBase::SpawnMarkerAnimTimelineProgress_Opacity(float Value) {
}







