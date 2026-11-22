#pragma once
#include "CoreMinimal.h"
#include "EVoteType.h"
#include "MoleVote.generated.h"

class AFortPlayerState;

USTRUCT(BlueprintType)
struct FMoleVote {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoteType VoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerState* VotingPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerState* AccusedPlayer;
    
    MOLEGAMERUNTIME_API FMoleVote();
};

