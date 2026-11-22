#include "FortTheaterCamera.h"

AFortTheaterCamera::AFortTheaterCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


FVector AFortTheaterCamera::LimitToTheater(const FVector& DesiredPosition) const {
    return FVector{};
}


