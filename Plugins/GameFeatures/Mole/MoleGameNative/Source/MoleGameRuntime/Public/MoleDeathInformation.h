#pragma once
#include "CoreMinimal.h"
#include "MoleDeathInformation.generated.h"

USTRUCT(BlueprintType)
struct FMoleDeathInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGhost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasVotedOut;
    
    MOLEGAMERUNTIME_API FMoleDeathInformation();
};

