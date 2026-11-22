#include "AthenaNavInvokerBox.h"
#include "Components/SceneComponent.h"
#include "NavigationInvokerComponent.h"

AAthenaNavInvokerBox::AAthenaNavInvokerBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->GenerationRange = 5000.00f;
    this->InvokerComp = CreateDefaultSubobject<UNavigationInvokerComponent>(TEXT("InvokerComponent"));
}

void AAthenaNavInvokerBox::SetInvokerEnabled(bool bEnable) {
}


