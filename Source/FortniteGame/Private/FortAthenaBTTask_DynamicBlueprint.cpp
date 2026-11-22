#include "FortAthenaBTTask_DynamicBlueprint.h"

UFortAthenaBTTask_DynamicBlueprint::UFortAthenaBTTask_DynamicBlueprint() {
    this->NodeName = TEXT("DynamicBlueprint");
    this->DynamicBlueprintStatusKeyName = TEXT("AIEvaluator_DynamicBlueprint_ExecutionStatus");
    this->DynamicBlueprintActorKeyName = TEXT("AIEvaluator_DynamicBlueprint_Actor");
}


