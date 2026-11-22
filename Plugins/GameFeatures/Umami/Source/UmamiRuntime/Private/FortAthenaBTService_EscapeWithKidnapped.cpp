#include "FortAthenaBTService_EscapeWithKidnapped.h"

UFortAthenaBTService_EscapeWithKidnapped::UFortAthenaBTService_EscapeWithKidnapped() {
    this->NodeName = TEXT("Escape with Kidnapped Service");
    this->KidnappedTargetKeyName = TEXT("AIEvaluator_Kidnapped_Target");
    this->KidnappedOriginKeyName = TEXT("AIEvaluator_Kidnapped_Origin");
    this->KidnappedModeKeyName = TEXT("AIEvaluator_Kidnapped_Mode");
    this->EscapeMovementKeyName = TEXT("Kidnap_Escape_MovementState");
    this->EscapeDestinationKeyName = TEXT("Kidnap_Escape_Destination");
    this->EscapeReachedPointsKeyName = TEXT("Kidnap_Escape_ReachedPoints");
    this->EscapeIsUsingGraveyardKeyName = TEXT("Kidnap_Escape_IsUsingGraveyard");
    this->EscapeGraveyardPointKeyName = TEXT("Shared_Kidnap_Escape_GraveyardPoint");
}


