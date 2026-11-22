#include "FortAthenaTutorial_Scoping.h"

AFortAthenaTutorial_Scoping::AFortAthenaTutorial_Scoping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GunToEquipItemDef = NULL;
    this->ScopingCameraPoint = NULL;
    this->ScopingCameraInSpeed = 0.00f;
    this->ScopingCameraOutSpeed = 0.00f;
}

void AFortAthenaTutorial_Scoping::OnTargetDestroyed(int32 TargetIndex) {
}



