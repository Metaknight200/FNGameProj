#include "FortAbilityKit.h"

UFortAbilityKit::UFortAbilityKit() {
    this->Tooltip = NULL;
    this->SummaryTooltip = NULL;
    this->StatList = NULL;
}

TArray<FText> UFortAbilityKit::GetDescription(const UObject* WorldContextObject, bool bFindSummaryTooltip) const {
    return TArray<FText>();
}

void UFortAbilityKit::BP_GetGadgets(TArray<UFortGadgetItemDefinition*>& GadgetItemDefinitions) {
}


