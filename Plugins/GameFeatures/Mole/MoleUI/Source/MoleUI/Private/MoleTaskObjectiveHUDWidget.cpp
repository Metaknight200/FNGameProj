#include "MoleTaskObjectiveHUDWidget.h"

UMoleTaskObjectiveHUDWidget::UMoleTaskObjectiveHUDWidget() : UUserWidget(FObjectInitializer::Get()) {
}

void UMoleTaskObjectiveHUDWidget::OnRepresentedObjectiveTargetValueChanged_Implementation(float NewTargetValue) {
}

void UMoleTaskObjectiveHUDWidget::OnRepresentedObjectiveCurrentValueChanged_Implementation(float NewCurrentValue) {
}

void UMoleTaskObjectiveHUDWidget::OnRepresentedObjectiveChanged_Implementation() {
}

FMoleTaskObjectiveUIInfo UMoleTaskObjectiveHUDWidget::GetTaskObjectiveInfo() const {
    return FMoleTaskObjectiveUIInfo{};
}


