#include "BuildingRift.h"
#include "Components/SphereComponent.h"
#include "FortSpectateClickableMapIcon.h"
#include "Net/UnrealNetwork.h"

ABuildingRift::ABuildingRift(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_DormantAll;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    this->DistToTarget = 0.00f;
    this->bSendMissionEvents = false;
    this->bDelayDeath = false;
    this->SlotSelectionMode = EFortRiftSpawnSlotSelectionMode::Random;
    this->MinSpawnDelay = 2.00f;
    this->MaxSpawnDelay = 2.00f;
    this->CosmeticStateIdleDelay = 1.00f;
    this->IntroToBeginSpawningDelay = 2.00f;
    this->EnvironmentQuery = NULL;
    this->QueryRadius = 0.00f;
    this->QueryMinDistance = 0.00f;
    this->bOverrideQueryMinDistance = false;
    this->bRegisterAsASpecialActor = false;
    this->bShouldDrawCompassIcon = false;
    this->bSpawnUsingRiftRotation = false;
    this->SpawnPointRadius = 50.00f;
    this->bRiftIsVisible = false;
    this->bRiftIsActive = false;
    this->bIsReadyToSpawnAI = false;
    this->bHasBeenInitialized = false;
    this->bHasBadRiftSlots = false;
    this->bRecalculateSpawnPointsPeriodically = false;
    this->SpawnPointEvaluationInterval = 0.00f;
    this->bCreateOverlapSphere = false;
    this->OverlapSphereComponent = NULL;
    this->LootDropConeHalfAngle = 60.00f;
    this->LootDropSpeed = 550.00f;
    this->bCanBeMarked = false;
    this->bBlockMarking = false;
    this->CosmeticState = ERiftCosmeticState::None;
    this->SpectatorMapIcon = CreateDefaultSubobject<UFortSpectateClickableMapIcon>(TEXT("FortSpectateClickableMapIcon"));
}

void ABuildingRift::StartEnvironmentQuery() {
}

void ABuildingRift::SetNewEQSData(UEnvQuery* NewEnvironmentQuery, TArray<FEnvNamedValue> NewQueryParams) {
}



void ABuildingRift::OnRep_RiftIsVisible() {
}

void ABuildingRift::OnRep_RiftIsActive() {
}

void ABuildingRift::OnRep_CosmeticState() {
}



void ABuildingRift::OnGameDifficultyChanged() {
}




void ABuildingRift::BroadcastRiftSpawningAI_Implementation() {
}







void ABuildingRift::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingRift, bRiftIsVisible);
    DOREPLIFETIME(ABuildingRift, bRiftIsActive);
    DOREPLIFETIME(ABuildingRift, CosmeticState);
}


