#pragma once
#include "CoreMinimal.h"
#include "PhosphorusTeamData.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FPhosphorusTeamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumRoundsWon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* CurrentMVP;
    
    PHOSPHORUSRUNTIME_API FPhosphorusTeamData();
};

