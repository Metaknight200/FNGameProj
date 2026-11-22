#include "FortItemCollectedParams.h"

UFortItemCollectedParams::UFortItemCollectedParams() {
    this->CollectedItemDefinition = NULL;
    this->CollectedBy = NULL;
    this->AmountCollected = 0;
}

void UFortItemCollectedParams::SetParams(const UFortWorldItemDefinition* _CollectedItemDefinition, AFortPlayerController* _CollectedBy, int32 _AmountCollected, UFortItemCollectedParams*& ThisParam) {
}

void UFortItemCollectedParams::BreakParams(UFortWorldItemDefinition*& _CollectedItemDefinition, AFortPlayerController*& _CollectedBy, int32& _AmountCollected) {
}


