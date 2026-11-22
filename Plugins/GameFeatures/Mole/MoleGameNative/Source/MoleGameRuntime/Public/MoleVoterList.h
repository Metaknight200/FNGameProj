#pragma once
#include "CoreMinimal.h"
#include "MoleVoterList.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FMoleVoterList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> Voters;
    
    MOLEGAMERUNTIME_API FMoleVoterList();
};

