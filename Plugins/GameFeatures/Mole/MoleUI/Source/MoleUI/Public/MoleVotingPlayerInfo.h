#pragma once
#include "CoreMinimal.h"
#include "MoleVotingPlayerInfo.generated.h"

class APlayerState;
class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FMoleVotingPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* PlayerItemDefinition;
    
    MOLEUI_API FMoleVotingPlayerInfo();
};

