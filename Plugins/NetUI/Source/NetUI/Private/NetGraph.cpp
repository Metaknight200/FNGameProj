#include "NetGraph.h"
#include "Layout/Clipping.h"

UNetGraph::UNetGraph() : UUserWidget(FObjectInitializer::Get()) {
    this->Clipping = EWidgetClipping::ClipToBounds;
    this->MaxPingToGraph = 300.00f;
}


