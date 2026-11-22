#include "FortAthenaBTService_Kidnap.h"

UFortAthenaBTService_Kidnap::UFortAthenaBTService_Kidnap() {
    this->NodeName = TEXT("Kidnap Service");
    this->KidnapKeyName = TEXT("AIEvaluator_Kidnap_ExecutionStatus");
    this->KidnapMovementName = TEXT("AIEvaluator_Kidnap_MovementState");
    this->KidnapTargetKeyName = TEXT("AIEvaluator_Kidnap_Target");
    this->KidnappedTargetKeyName = TEXT("AIEvaluator_Kidnapped_Target");
    this->KidnappedOriginKeyName = TEXT("AIEvaluator_Kidnapped_Origin");
    this->KidnapRetrievalDestinationKeyName = TEXT("AIEvaluator_Kidnap_Retrieval_Destination");
    this->KidnapLastFailedRetrievalDestinationKeyName = TEXT("AIEvaluator_Kidnap_LastFailedRetrieval_Destination");
    this->KidnapRetrievalActionKeyName = TEXT("AIEvaluator_Kidnap_RetrievalAction_ExecutionStatus");
    this->KidnapTractorBeamStateKeyName = TEXT("AIEvaluator_Kidnap_TractorBeam_BeamState");
    this->FocusActorName = TEXT("AIEvaluator_Global_FocusActor");
    this->FocalPointName = TEXT("AIEvaluator_Global_FocalPoint");
}


