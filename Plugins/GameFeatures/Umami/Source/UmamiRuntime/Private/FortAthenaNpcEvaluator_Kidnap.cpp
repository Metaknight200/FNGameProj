#include "FortAthenaNpcEvaluator_Kidnap.h"

UFortAthenaNpcEvaluator_Kidnap::UFortAthenaNpcEvaluator_Kidnap() {
    this->KidnapKeyName = TEXT("AIEvaluator_Kidnap_ExecutionStatus");
    this->KidnapMovementName = TEXT("AIEvaluator_Kidnap_MovementState");
    this->TryToKidnapMovementKeyName = TEXT("AIEvaluator_Kidnap_TryToKidnap_MovementState");
    this->KidnapTargetKeyName = TEXT("AIEvaluator_Kidnap_Target");
    this->KidnappedTargetKeyName = TEXT("AIEvaluator_Kidnapped_Target");
    this->KidnappedTimeKeyName = TEXT("AIEvaluator_Kidnapped_Time");
    this->KidnappedModeKeyName = TEXT("AIEvaluator_Kidnapped_Mode");
    this->KidnapRetrievalDestinationKeyName = TEXT("AIEvaluator_Kidnap_Retrieval_Destination");
    this->KidnapLastFailedRetrievalDestinationKeyName = TEXT("AIEvaluator_Kidnap_LastFailedRetrieval_Destination");
    this->KidnapRetrievalActionKeyName = TEXT("AIEvaluator_Kidnap_RetrievalAction_ExecutionStatus");
    this->KidnapTractorBeamStateKeyName = TEXT("AIEvaluator_Kidnap_TractorBeam_BeamState");
    this->KidnapEscapeReachedPointsKeyName = TEXT("Kidnap_Escape_ReachedPoints");
    this->DestroyBlockerExecutionStatusKeyName = TEXT("AIEvaluator_DestroyBlocker_ExecutionStatus");
    this->KidnappedByAIGE = NULL;
    this->CachedKidnapSkillSet = NULL;
}


