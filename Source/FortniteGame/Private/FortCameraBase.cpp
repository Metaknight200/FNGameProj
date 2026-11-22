#include "FortCameraBase.h"

AFortCameraBase::AFortCameraBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinDistanceToDrag = 0.00f;
    this->DefaultFieldOfView = 90.00f;
    this->ExhibitActor = NULL;
    this->bExhibitActorChanged = false;
    this->CheckForDragBegin = false;
}





void AFortCameraBase::Exhibit(AFortExhibitActor* TargetActor) {
}


