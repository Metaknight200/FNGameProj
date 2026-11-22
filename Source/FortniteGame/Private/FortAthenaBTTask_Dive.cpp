#include "FortAthenaBTTask_Dive.h"

UFortAthenaBTTask_Dive::UFortAthenaBTTask_Dive() {
    this->NodeName = TEXT("Diving");
    this->ExecutionStatusKeyName = TEXT("AIEvaluator_Dive_ExecutionStatus");
    this->DiveDestinationKeyName = TEXT("AIEvaluator_Dive_Destination");
}


