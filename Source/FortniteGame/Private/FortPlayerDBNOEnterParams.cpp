#include "FortPlayerDBNOEnterParams.h"

UFortPlayerDBNOEnterParams::UFortPlayerDBNOEnterParams() {
    this->KilledPlayer = NULL;
    this->KilledBy = NULL;
}

void UFortPlayerDBNOEnterParams::SetParams(AFortPlayerPawn* _KilledPlayer, AController* _KilledBy, UFortPlayerDBNOEnterParams*& ThisParam) {
}

void UFortPlayerDBNOEnterParams::BreakParams(AFortPlayerPawn*& _KilledPlayer, AController*& _KilledBy) {
}


