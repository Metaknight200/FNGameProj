#include "FortQueryGenerator_GoalOnCircle.h"
#include "FortQueryItemType_Goal.h"

UFortQueryGenerator_GoalOnCircle::UFortQueryGenerator_GoalOnCircle() {
    this->ItemType = UFortQueryItemType_Goal::StaticClass();
    this->bIncludeCenterActorInGeneratedGoals = true;
    this->OptionalAssignmentSettings = NULL;
}


