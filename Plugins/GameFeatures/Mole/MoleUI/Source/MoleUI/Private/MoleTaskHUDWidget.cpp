#include "MoleTaskHUDWidget.h"

UMoleTaskHUDWidget::UMoleTaskHUDWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ObjectiveEntryBox = NULL;
    this->TaskProgress = NULL;
    this->CachedOwningTaskComponent = NULL;
    this->CachedTaskDataAsset = NULL;
    this->bAttemptShowActiveObjectives = true;
}

void UMoleTaskHUDWidget::SetTaskHandle(FMoleActiveTaskStateHandle TaskHandle) {
}

void UMoleTaskHUDWidget::SetTaskAsset(UMoleTaskDataAsset* TaskAsset) {
}

void UMoleTaskHUDWidget::SetAttemptShowActiveObjectives(bool bAttemptShow) {
}


void UMoleTaskHUDWidget::OnRepresentedTaskChanged_Implementation(const UMoleTaskDataAsset* PreviousTaskAsset, FMoleActiveTaskStateHandle PreviousHandle) {
}

void UMoleTaskHUDWidget::OnRepresentedLogicPhaseChange() {
}

FText UMoleTaskHUDWidget::GetTaskTitle() const {
    return FText::GetEmpty();
}

UMoleTaskDataAsset* UMoleTaskHUDWidget::GetTaskAsset() const {
    return NULL;
}


