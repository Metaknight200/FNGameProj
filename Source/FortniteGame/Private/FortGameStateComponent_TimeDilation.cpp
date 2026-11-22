#include "FortGameStateComponent_TimeDilation.h"

UFortGameStateComponent_TimeDilation::UFortGameStateComponent_TimeDilation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EndGameTimeDilationCurve = NULL;
    this->TimeDilationManager = NULL;
}


