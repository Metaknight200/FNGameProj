#include "UnicornAthenaPawnSampler.h"

UUnicornAthenaPawnSampler::UUnicornAthenaPawnSampler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldListenOutToDBNOEvent = true;
}

void UUnicornAthenaPawnSampler::HandlePawnDBNOChanged(AFortPawn* FortPawn, bool bInIsDBNO) {
}


