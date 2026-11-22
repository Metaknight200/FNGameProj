#include "FortTransactionStrip.h"

UFortTransactionStrip::UFortTransactionStrip() : UUserWidget(FObjectInitializer::Get()) {
    this->Text_CostDescription = NULL;
    this->ResourceCurrency = NULL;
}


void UFortTransactionStrip::HandleOnItemCountChanged(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, UFortItemDefinition* Definition, int32 Delta) {
}


