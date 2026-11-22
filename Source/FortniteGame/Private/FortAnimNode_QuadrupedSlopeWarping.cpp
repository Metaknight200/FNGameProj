#include "FortAnimNode_QuadrupedSlopeWarping.h"

FFortAnimNode_QuadrupedSlopeWarping::FFortAnimNode_QuadrupedSlopeWarping() {
    this->NumSpineBones = 0;
    this->MaxMovementDistBeforeNewTrace = 0.00f;
    this->bUseMovementComponentFloorInfoInsteadOfTraces = false;
    this->bOnlyAffectSkeletonRootBone = false;
}

