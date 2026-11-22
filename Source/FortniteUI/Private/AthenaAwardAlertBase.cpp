#include "AthenaAwardAlertBase.h"

UAthenaAwardAlertBase::UAthenaAwardAlertBase() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerVM = NULL;
}

void UAthenaAwardAlertBase::SetDataSource(UAthenaPlayerViewModel* PlayerViewModel) {
}



