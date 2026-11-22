#include "PlayspaceComponent_AIPerceptionModifier.h"

UPlayspaceComponent_AIPerceptionModifier::UPlayspaceComponent_AIPerceptionModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AIBotSightClampPriority = 255;
    this->ConcealmentDistance = -1.00f;
}


