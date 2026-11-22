#include "BattleMapNode.h"

ABattleMapNode::ABattleMapNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EdgeClass = NULL;
    this->ChildrenNodeClass = NULL;
    this->bEnableAutomaticResize = true;
    this->bSupportSelection = true;
    this->bSupportScrubbing = true;
}


