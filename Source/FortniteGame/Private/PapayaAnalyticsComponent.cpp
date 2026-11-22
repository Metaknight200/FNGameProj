#include "PapayaAnalyticsComponent.h"

UPapayaAnalyticsComponent::UPapayaAnalyticsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bSubscribeToMeshNetwork = true;
    this->ParentAnalyticsComp = NULL;
    this->ChildAnalyticsComp = NULL;
}


