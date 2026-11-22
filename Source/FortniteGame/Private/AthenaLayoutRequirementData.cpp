#include "AthenaLayoutRequirementData.h"
#include "Templates/SubclassOf.h"

UAthenaLayoutRequirementData::UAthenaLayoutRequirementData() {
    this->BuildingClass = NULL;
}

ABuildingLayoutRequirement* UAthenaLayoutRequirementData::SpawnMatchingLayoutRequirement(ABuildingSMActor* SourceActor, bool bMatchResourceType) {
    return NULL;
}

bool UAthenaLayoutRequirementData::FindMatchingLayoutRequirementClass(ABuildingSMActor* BuildingActor, TSubclassOf<ABuildingSMActor>& MatchingClass) const {
    return false;
}


