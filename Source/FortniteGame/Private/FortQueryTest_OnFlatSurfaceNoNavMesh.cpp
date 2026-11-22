#include "FortQueryTest_OnFlatSurfaceNoNavMesh.h"

UFortQueryTest_OnFlatSurfaceNoNavMesh::UFortQueryTest_OnFlatSurfaceNoNavMesh() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Radius = 512.00f;
    this->ZTolerance = 10.00f;
    this->NormalTolerance = 15.00f;
    this->TraceOffset = 1024.00f;
}


