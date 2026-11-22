#pragma once
#include "CoreMinimal.h"
#include "EVoteType.h"
#include "MoleVoteResolutionData.generated.h"

class APlayerState;
class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FMoleVoteResolutionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoteType VoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* EjectedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* EjectedPlayerItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Votes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkippedDueToEqualVotesAndSkips;
    
    MOLEGAMERUNTIME_API FMoleVoteResolutionData();
};

