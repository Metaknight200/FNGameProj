#include "AthenaRewardEventGraph.h"
#include "EFortItemType.h"

UAthenaRewardEventGraph::UAthenaRewardEventGraph() {
    this->ItemType = EFortItemType::AthenaRewardGraph;
    this->bAllowMultipleStacks = false;
    this->bRewardKeysInternally = false;
    this->CosmeticRandomnes = NULL;
}


