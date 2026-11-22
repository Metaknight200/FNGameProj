#include "FortPlayerAnimInstance_NevadaDriver.h"

UFortPlayerAnimInstance_NevadaDriver::UFortPlayerAnimInstance_NevadaDriver() {
    this->NevadaVehicle = NULL;
    this->AnimLeftRight = 0.00f;
    this->AnimForwardBackward = 0.00f;
    this->BoostCount = 0;
    this->PreviousBoostCount = 0;
    this->bIsBoostingAgain = false;
    this->bIsMoving = false;
    this->MinVehicleVelocityToBeMoving = 500.00f;
    this->DriverSocketName = TEXT("Driver");
    this->RightHandAttachmentSocketName = TEXT("hand_attachment_socket_r");
    this->LeftHandAttachmentSocketName = TEXT("hand_attachment_socket_l");
    this->RightFootAttachmentSocketName = TEXT("foot_attachment_socket_r");
    this->LeftFootAttachementSocketName = TEXT("foot_attachment_socket_l");
}


