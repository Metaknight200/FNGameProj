#pragma once
#include "CoreMinimal.h"
#include "MoleVoterList.h"
#include "MoleVotingSummary.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FMoleVotingSummary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APlayerState*, FMoleVoterList> VotingResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoleVoterList SkippedVotes;
    
    MOLEGAMERUNTIME_API FMoleVotingSummary();
};

