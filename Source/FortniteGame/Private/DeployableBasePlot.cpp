#include "DeployableBasePlot.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ADeployableBasePlot::ADeployableBasePlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultScene"));
    this->OccupantDeployableBaseRecord = NULL;
    this->BuildableSpaceComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BuildableSpaceComponent"));
    this->SavableSpaceComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("SavableSpaceComponent"));
    this->EntirePlotSpaceComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EntirePlotSpaceComponent"));
    this->SpawnOffsetComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->BuildableAreasArray[0] = (UBoxComponent*)BuildableSpaceComponent;
    this->BuildableAreasArray[1] = (UBoxComponent*)BuildableSpaceComponent;
    this->BuildableAreasArray[2] = (UBoxComponent*)BuildableSpaceComponent;
    this->DeployableBaseCore = NULL;
    this->bDirty = false;
    this->bDirtiedSinceLastWriteToBuffer = false;
    this->bCloudFileSavedSinceLastCloudItemUpdate = false;
    this->CurrentBuildingState = EDeployableBaseBuildingState::Unoccupied;
    this->GoalBuildingState = EDeployableBaseBuildingState::Empty;
    this->PlotInventory = NULL;
    this->DeferredActorIdxToResumeAt = 0;
    this->NumActorsFromRecordDestroyed = 0;
    this->MaxActorsToCreatePerBuildingCall = 5;
    this->MaxActorsToDestroyPerDestroyCall = 5;
    this->DelayBetweenActorRecordBuilding = 2.00f;
    this->DelayBetweenActorRecordDestroying = 2.00f;
    this->PlayerStart = NULL;
    this->ConstructionTimeEffect = NULL;
    this->BuildableAreasArray[0]->SetupAttachment(RootComponent);
    this->BuildableAreasArray[1]->SetupAttachment(RootComponent);
    this->BuildableAreasArray[2]->SetupAttachment(RootComponent);
    this->BuildableSpaceComponent->SetupAttachment(RootComponent);
    this->EntirePlotSpaceComponent->SetupAttachment(RootComponent);
    this->SavableSpaceComponent->SetupAttachment(RootComponent);
    this->SpawnOffsetComponent->SetupAttachment(RootComponent);
}

void ADeployableBasePlot::SetContextComponent(UPrimitiveComponent* ContextComponent) {
}

void ADeployableBasePlot::OnRep_OccupantNetID() {
}

void ADeployableBasePlot::OnRep_CurrentBuildingState() {
}

void ADeployableBasePlot::OnRep_BuildableSpaceExpansionVector() {
}

void ADeployableBasePlot::OnCurrentBuildingStateSet_Implementation(EDeployableBaseBuildingState InCurrentBuildingState) {
}

void ADeployableBasePlot::OnBuildingStateTransition_Implementation(EDeployableBaseBuildingState InPreviousState, EDeployableBaseBuildingState InCurrentState) {
}

bool ADeployableBasePlot::IsOccupied() const {
    return false;
}

bool ADeployableBasePlot::IsOccupant(const FUniqueNetIdRepl& UserId) const {
    return false;
}

bool ADeployableBasePlot::IsBuildingActorWithinBuildableSpace(const ABuildingActor* ActorToCheck, const FVector& GridLocation) const {
    return false;
}

void ADeployableBasePlot::HandleBuildingStateTransition_Implementation(EDeployableBaseBuildingState InPreviousState, EDeployableBaseBuildingState InCurrentState) {
}

AFortPlayerStart* ADeployableBasePlot::GetPlayerStart() {
    return PlayerStart;
}

FUniqueNetIdRepl ADeployableBasePlot::GetOccupantNetID() const {
    return FUniqueNetIdRepl{};
}

int32 ADeployableBasePlot::GetNumOfItemsInPlot() const {
    return 0;
}

void ADeployableBasePlot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADeployableBasePlot, OccupantNetID);
    DOREPLIFETIME(ADeployableBasePlot, CurrentBuildingState);
    DOREPLIFETIME(ADeployableBasePlot, PlotInventory);
    DOREPLIFETIME(ADeployableBasePlot, BuildableSpaceExpansionVector);
    DOREPLIFETIME(ADeployableBasePlot, BuildableAreasStructuralSupportBoxesArray);
}


