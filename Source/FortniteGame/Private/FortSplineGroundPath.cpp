#include "FortSplineGroundPath.h"
#include "Net/UnrealNetwork.h"

AFortSplineGroundPath::AFortSplineGroundPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxDistanceBetweenPathwayPoints = 500.00f;
    this->EvenlySpacedPointsDistance = 900.00f;
    this->TangentDistance = 900.00f;
    this->PathUpdateSecondIntervals = 0.10f;
    this->PathTestRadius = 400.00f;
    this->MinDistanceForAddingRawPoint = 50.00f;
    this->bDrawDebugRawPoints = false;
    this->bDrawDebugRawEnd = false;
    this->bDrawDebugReppedPoints = false;
    this->bDrawDebugEvenlySizedSegments = false;
    this->bDrawDebugTangents = false;
    this->bDrawDebugCollision = false;
    this->bDrawDebugSplineEnd = false;
    this->CleanupTime = 5.00f;
    this->LerpScaleRate = 1.00f;
    this->GrowthSmoothingStrength = 13.00f;
    this->MostRecentlyAddedTime = 0.00f;
    this->ServerIndexToAssign = 0;
    this->StaticMesh = NULL;
    this->Material = NULL;
    this->ForwardAxis = ESplineMeshAxis::X;
    this->LerpLocationRate = 1.00f;
    this->bMostRecentLocationHasBeenSet = false;
    this->bHasWarnedOfArrayOverfill = false;
    this->bHasWarnedOfUnableToRepDestroy = false;
    this->FirstActiveEvenlySizedSegmentIndex = 0;
    this->MaxReppedPointsBeforeOverfill = 50;
    this->DistanceRemainingToNextEvenlySpacedPoint = 0.00f;
    this->PositionFinalizedParameterName = TEXT("AttachedAlpha");
    this->GrowthParameterName = TEXT("Growth");
    this->ShrinkParameterName = TEXT("Shrink");
    this->OpacityParameterName = TEXT("Opacity");
    this->TotalFadeInTime = 3.00f;
    this->TotalFadeOutTime = 2.00f;
    this->SectionsLifeTime = 30.00f;
    this->ShrinkTimeMultWhenFading = 0.50f;
    this->ShrinkTimeMultWhenBurning = 2.00f;
    this->GrowthTimeMult = 2.00f;
    this->LocationLerpTimeMult = 2.00f;
    this->CurrentFadeInTime = 3.00f;
    this->CurrentFadeOutTime = -1.00f;
    this->TotalSplineMeshesToFadeIn = 0;
    this->LowestUninitializedRawLastServerIndex = 0;
    this->LowestUninitializedReppedIndex = 0;
    this->NumIgnitedSections = 0;
    this->bSomeSectionsAreFadingOut = false;
}

void AFortSplineGroundPath::StartNextSectionTimedOut() {
}

void AFortSplineGroundPath::OnRep_MostRecentlyAddedLocation() {
}


void AFortSplineGroundPath::DebugDisplayPathPoints() const {
}

void AFortSplineGroundPath::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortSplineGroundPath, MostRecentlyAddedLocation);
    DOREPLIFETIME(AFortSplineGroundPath, FortReppedPointList);
}


