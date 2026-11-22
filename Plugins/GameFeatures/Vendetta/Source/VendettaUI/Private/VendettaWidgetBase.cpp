#include "VendettaWidgetBase.h"
#include "FortAthenaMutator_Vendetta.h"

UVendettaWidgetBase::UVendettaWidgetBase() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_Vendetta::StaticClass();
    this->CachedVendettaMutator = NULL;
}




