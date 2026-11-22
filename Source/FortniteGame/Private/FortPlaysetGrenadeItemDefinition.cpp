#include "FortPlaysetGrenadeItemDefinition.h"

UFortPlaysetGrenadeItemDefinition::UFortPlaysetGrenadeItemDefinition() {
    this->ReticleCornerAngles.AddDefaulted(4);
}

UFortPlaysetItemDefinition* UFortPlaysetGrenadeItemDefinition::GetPlaysetToSpawn(bool bForceLoad) const {
    return NULL;
}


