#include "MoleActiveTaskState.h"

FMoleActiveTaskState::FMoleActiveTaskState() {
    this->TaskAsset = NULL;
    this->TaskLogic = NULL;
    this->NotificationType = EMoleNewTaskNotificationType::None;
}

