#include "FortMissionObjectiveProgressBase.h"

UFortMissionObjectiveProgressBase::UFortMissionObjectiveProgressBase() {
    this->ObjectiveProgressBar = NULL;
    this->ProgressBarText = NULL;
}

void UFortMissionObjectiveProgressBase::Update_Implementation(AFortObjectiveBase* Objective, int32 BarIndex) {
}



