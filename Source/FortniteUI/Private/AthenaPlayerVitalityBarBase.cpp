#include "AthenaPlayerVitalityBarBase.h"

UAthenaPlayerVitalityBarBase::UAthenaPlayerVitalityBarBase() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerVM = NULL;
}

void UAthenaPlayerVitalityBarBase::SetDataSource(UAthenaPlayerViewModel* PlayerViewModel) {
}


