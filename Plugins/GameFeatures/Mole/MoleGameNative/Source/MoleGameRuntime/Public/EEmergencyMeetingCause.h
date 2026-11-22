#pragma once
#include "CoreMinimal.h"
#include "EEmergencyMeetingCause.generated.h"

UENUM(BlueprintType)
enum class EEmergencyMeetingCause : uint8 {
    None,
    BodyReported,
    MeetingCalled,
};

