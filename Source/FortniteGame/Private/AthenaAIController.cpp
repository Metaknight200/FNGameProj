#include "AthenaAIController.h"
#include "AthenaPathFollowingComponent.h"

AAthenaAIController::AAthenaAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UAthenaPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->bTurnTransitionsEnabled = false;
    this->bAllowHotspotAbilityLooping = false;
    FProperty* p_PathFollowingComponent_Prior = GetClass()->FindPropertyByName("PathFollowingComponent");
    this->FortPathFollowingComp = (UFortPathFollowingComponent*)*p_PathFollowingComponent_Prior->ContainerPtrToValuePtr<UAthenaPathFollowingComponent*>(this);
    this->PrimaryMeleeAttackAbilityInstance = NULL;
    this->PrimaryRangedAttackAbilityInstance = NULL;
    this->CheapFlyingNavPointHorizontalGridRatio = 0.50f;
    this->CheapFlyingNavNavPointVerticalGridRatio = 0.50f;
    this->bEnableCheapFlyingNavigation = false;
    this->bAllowBacktrackPathfinding = true;
    this->bIsGoalRequiredForBehavior = true;
    this->bRegisterToAthenaAIDropper = true;
    this->SecondaryGoalActor = NULL;
    this->CachedAffiliationManager = NULL;
    this->AthenaPFC = NULL;
}


