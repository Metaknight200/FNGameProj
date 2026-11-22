#include "FortValetPassengerAnimInstance.h"

UFortValetPassengerAnimInstance::UFortValetPassengerAnimInstance() {
    this->TurnYaw = 0.00f;
    this->InTime = 0.00f;
    this->OutTime = 0.00f;
    this->NegativeTurnYaw = 0.00f;
    this->bIsReloading = false;
    this->bIsTargeting = false;
    this->bIsFiring = false;
    this->bIsUsingConsumable = false;
    this->bIsInAction = false;
    this->bIsPassengerBackLeft = false;
    this->bIsThrowConsumable = false;
    this->bIsTargetingOrThrowingConsumable = false;
}


