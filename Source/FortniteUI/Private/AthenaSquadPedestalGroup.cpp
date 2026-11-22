#include "AthenaSquadPedestalGroup.h"
#include "Components/SceneComponent.h"

AAthenaSquadPedestalGroup::AAthenaSquadPedestalGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->UsedSubgame = ESubGame::Athena;
    this->MonitoredSquadIdx = -1;
    this->PedestalChildrenRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PedestalChildrenRoot"));
    this->PedestalChildrenRoot->SetupAttachment(RootComponent);
}


