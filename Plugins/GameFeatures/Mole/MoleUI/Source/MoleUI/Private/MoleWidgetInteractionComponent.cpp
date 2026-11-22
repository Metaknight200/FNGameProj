#include "MoleWidgetInteractionComponent.h"
#include "Components/WidgetInteractionComponent.h"

UMoleWidgetInteractionComponent::UMoleWidgetInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractionSource = EWidgetInteractionSource::CenterScreen;
    this->InputComp = NULL;
}


