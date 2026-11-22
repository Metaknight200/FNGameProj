#include "FortAthenaSplineZipline.h"
#include "Components/SplineComponent.h"

AFortAthenaSplineZipline::AFortAthenaSplineZipline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("ZiplineSpline"));
    this->ZiplineSpline = (USplineComponent*)RootComponent;
}

void AFortAthenaSplineZipline::CheckZiplineDisableHotfix() {
}


