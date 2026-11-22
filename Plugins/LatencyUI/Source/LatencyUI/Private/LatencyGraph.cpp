#include "LatencyGraph.h"
#include "Layout/Clipping.h"

ULatencyGraph::ULatencyGraph() : UUserWidget(FObjectInitializer::Get()) {
    this->Clipping = EWidgetClipping::ClipToBounds;
    this->MaxLatencyToGraph = 33.00f;
}


