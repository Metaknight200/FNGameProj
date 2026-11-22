#include "RespawnAndSpectateSelectWidgetBase.h"
#include "FortAthenaMutator_RespawnAndSpectateSelect.h"

URespawnAndSpectateSelectWidgetBase::URespawnAndSpectateSelectWidgetBase() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_RespawnAndSpectateSelect::StaticClass();
    this->CachedMutator = NULL;
    this->ConfirmButton = NULL;
    this->TextHeader = NULL;
    this->TextDescription = NULL;
}


void URespawnAndSpectateSelectWidgetBase::OnSelectionMadeMobile(URespawnAndSpectateSelectButtonWidgetBase* Widget) {
}

void URespawnAndSpectateSelectWidgetBase::OnSelectionMade(URespawnAndSpectateSelectButtonWidgetBase* Widget) {
}

void URespawnAndSpectateSelectWidgetBase::OnSelectionHovered(URespawnAndSpectateSelectButtonWidgetBase* Widget) {
}

void URespawnAndSpectateSelectWidgetBase::OnSelectionConfirmed() {
}

void URespawnAndSpectateSelectWidgetBase::OnRespawnBecameAvailable() {
}

void URespawnAndSpectateSelectWidgetBase::OnLocalPlayerRespawned() {
}

void URespawnAndSpectateSelectWidgetBase::OnAvailableOptionsChanged() {
}

UWidget* URespawnAndSpectateSelectWidgetBase::NativeGetDesiredFocusTarget() const {
    return NULL;
}

int32 URespawnAndSpectateSelectWidgetBase::GetCurrentlyHoveredButtonIndex() const {
    return 0;
}


