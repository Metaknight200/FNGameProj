#include "FortAthenaBTService_AIEvaluator.h"
#include "FortAthenaAIEvaluator.h"

UFortAthenaBTService_AIEvaluator::UFortAthenaBTService_AIEvaluator() {
    this->NodeName = TEXT("AI Evaluator");
    this->AIEvaluatorClass = UFortAthenaAIEvaluator::StaticClass();
}


