#include "FortUINotificationQueue.h"

UFortUINotificationQueue::UFortUINotificationQueue() {
    this->MaxNotificationsInQueue = 240;
}

void UFortUINotificationQueue::UnregisterToReceiveNotifications() {
}

void UFortUINotificationQueue::RemoveNotification(const UFortUINotification* InNotificationDescription) {
}

void UFortUINotificationQueue::RegisterToReceiveNotifications(const FOnFortNotificationAvailable& NotificationDelegate) {
}

void UFortUINotificationQueue::QueueNotification(UFortUINotification* Notification, bool bShowImmediately) {
}

UFortUINotification* UFortUINotificationQueue::GetNextNotification() {
    return NULL;
}

bool UFortUINotificationQueue::CanNotificationBeQueued(EFortNotificationPriority Priority) const {
    return false;
}


