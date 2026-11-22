#include "FortFootstepSurfaceData.h"

UFortFootstepSurfaceData::UFortFootstepSurfaceData() {
    this->VerticalPitchMaxBelow = 0.70f;
    this->VerticalPitchMaxAbove = 1.30f;
    this->VerticalPitchTileRange = 3.00f;
}

void UFortFootstepSurfaceData::GetSurfaceInfo(FFortFootstepSurfaceInfo& OutInfo, bool bUse1PFootsteps) const {
}


