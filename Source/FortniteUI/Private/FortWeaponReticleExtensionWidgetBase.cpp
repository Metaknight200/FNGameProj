#include "FortWeaponReticleExtensionWidgetBase.h"

UFortWeaponReticleExtensionWidgetBase::UFortWeaponReticleExtensionWidgetBase() {
    this->CachedAssociatedWeapon = NULL;
}





void UFortWeaponReticleExtensionWidgetBase::HandleTargetingChanged(bool bNewIsADS) {
}

void UFortWeaponReticleExtensionWidgetBase::HandleFullyExitVehicle() {
}

void UFortWeaponReticleExtensionWidgetBase::HandleEnterVehiclePassenger() {
}

void UFortWeaponReticleExtensionWidgetBase::HandleEnterVehicleDriver() {
}

bool UFortWeaponReticleExtensionWidgetBase::GetIsADS() const {
    return false;
}

AFortWeapon* UFortWeaponReticleExtensionWidgetBase::GetEquippedWeapon() const {
    return NULL;
}


