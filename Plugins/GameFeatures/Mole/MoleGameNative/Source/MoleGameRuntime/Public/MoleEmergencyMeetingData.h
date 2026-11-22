#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EEmergencyMeetingCause.h"
#include "MoleEmergencyMeetingData.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FMoleEmergencyMeetingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEmergencyMeetingCause MeetingCause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* MeetingCaller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* BodyFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LocationTag;
    
    MOLEGAMERUNTIME_API FMoleEmergencyMeetingData();
};

