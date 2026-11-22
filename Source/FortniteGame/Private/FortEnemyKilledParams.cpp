#include "FortEnemyKilledParams.h"

UFortEnemyKilledParams::UFortEnemyKilledParams() {
    this->KilledPawn = NULL;
    this->KilledBy = NULL;
}

void UFortEnemyKilledParams::SetParams(AFortPawn* _KilledPawn, AFortPlayerController* _KilledBy, UFortEnemyKilledParams*& ThisParam) {
}

void UFortEnemyKilledParams::BreakParams(AFortPawn*& _KilledPawn, AFortPlayerController*& _KilledBy) {
}


