#include "MolePrimaryActiveTaskHUDWidget.h"

UMolePrimaryActiveTaskHUDWidget::UMolePrimaryActiveTaskHUDWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CachedOwningTaskComponent = NULL;
    this->MoleTaskHUDWidget = NULL;
}


