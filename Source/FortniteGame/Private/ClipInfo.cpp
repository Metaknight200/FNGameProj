#include "ClipInfo.h"

FClipInfo::FClipInfo() {
    this->StartTimestamp = 0.00f;
    this->Duration = 0.00f;
    this->CameraType = ESpectatorCameraType::ThirdPerson;
    this->MessageSettings = EClipMessageSettings::DontShow;
    this->MessageNotificationType = ECameraShotNotificationTypes::Notification;
    this->MessageDisplayTime = 0.00f;
}

