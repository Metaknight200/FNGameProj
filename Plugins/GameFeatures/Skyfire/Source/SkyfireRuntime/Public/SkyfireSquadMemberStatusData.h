#pragma once
#include "CoreMinimal.h"
#include "SkyfireSquadMemberStatusData.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FSkyfireSquadMemberStatusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnMothership;
    
    SKYFIRERUNTIME_API FSkyfireSquadMemberStatusData();
};

