#include "FortAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "FortPathFollowingComponent.h"
#include "Templates/SubclassOf.h"

AFortAIController::AFortAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UFortPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->Blackboard = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
    this->bUsingNavMesh = false;
    this->bAlwaysNotifyBumpWall = false;
    this->bInstantRotation = false;
    this->bTurnTransitionsEnabled = true;
    this->bAllowHotspotAbilityLooping = true;
    FProperty* p_PathFollowingComponent_Prior = GetClass()->FindPropertyByName("PathFollowingComponent");
    this->FortPathFollowingComp = (UFortPathFollowingComponent*)*p_PathFollowingComponent_Prior->ContainerPtrToValuePtr<UFortPathFollowingComponent*>(this);
    this->GoalInfoUpdateRate = 0.25f;
    this->GoalActor = NULL;
    this->GoalVisibilityPersistanceTime = 1.00f;
    this->MyFortPawn = NULL;
    this->AIGoalComponent = NULL;
    this->BTAssetToRunOnPawnAISpawned = NULL;
}

void AFortAIController::WakeUp() {
}

void AFortAIController::UnlockMovementResource() {
}

void AFortAIController::UnlockBehaviorResource() {
}

void AFortAIController::SetupCustomVIM(UClass* VIM) {
}

void AFortAIController::SetTeamInt(uint8 InTeam) {
}

void AFortAIController::SetTeam(TEnumAsByte<EFortTeam::Type> InTeam) {
}

void AFortAIController::SetPawnAIType(EFortressAIType NewAIType, AActor* SpawnSpot) {
}

void AFortAIController::SetIsSleeping(bool bNewSleepStatus) {
}

void AFortAIController::SetGoalActor(AActor* InActor, bool bLocationAlwaysKnown) {
}

void AFortAIController::SetFullPeripheralVision(bool bNewFullPeripheralVision) {
}

void AFortAIController::SetAlwaysGameplayRelevant(bool bInAlwaysGameplayRelevant) {
}

void AFortAIController::OnBuildingActorGoalDestroyed() {
}

void AFortAIController::LockMovementResource() {
}

void AFortAIController::LockBehaviorResource() {
}

bool AFortAIController::IsIgnoringProximity(AFortAIController* FortAIController) {
    return false;
}

bool AFortAIController::IsAllowedToSleep() {
    return false;
}

void AFortAIController::IgnoreProximityForDuration(float DurationToIgnore) {
}

AActor* AFortAIController::GetGoalActor() const {
    return GoalActor;
}

UFortAIEncounterInfo* AFortAIController::GetEncounterInfo() const {
    return NULL;
}

bool AFortAIController::CreateBuildingActor(TSubclassOf<ABuildingSMActor> BuildingClass, FVector BuildLoc, FRotator BuildRot, bool bMirrored) {
    return false;
}

void AFortAIController::ClearAllFocalPoints() {
}


