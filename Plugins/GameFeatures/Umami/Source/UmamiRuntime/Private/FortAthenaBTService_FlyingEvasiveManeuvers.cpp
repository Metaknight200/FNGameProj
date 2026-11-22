#include "FortAthenaBTService_FlyingEvasiveManeuvers.h"

UFortAthenaBTService_FlyingEvasiveManeuvers::UFortAthenaBTService_FlyingEvasiveManeuvers() {
    this->NodeName = TEXT("Flying Evasive Maneuvers Service");
    this->FlyingEvasiveManeuversMode = EFlyingEvasiveManeuversMode::HorizontalAndVerticalWhileMoving;
}


