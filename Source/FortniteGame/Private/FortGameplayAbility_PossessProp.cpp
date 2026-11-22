#include "FortGameplayAbility_PossessProp.h"
#include "Templates/SubclassOf.h"

UFortGameplayAbility_PossessProp::UFortGameplayAbility_PossessProp() {
    this->DefaultAllowedPropTable = NULL;
    this->AllowedPropTable = NULL;
}

void UFortGameplayAbility_PossessProp::SetAllowedPropTable(UDataTable* InAllowedPropTable) {
}

float UFortGameplayAbility_PossessProp::GetPreviewScaleByIndex(int32 AllowedPropIndex) const {
    return 0.0f;
}

FPossessPropClasses UFortGameplayAbility_PossessProp::GetAllowedPropDataByIndex(int32 AllowedPropIndex) const {
    return FPossessPropClasses{};
}

TSubclassOf<ABuildingActor> UFortGameplayAbility_PossessProp::GetAllowedPropClassByIndex(int32 AllowedPropIndex) const {
    return NULL;
}


