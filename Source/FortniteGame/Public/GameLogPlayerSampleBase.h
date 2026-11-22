#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameLogPlayerSampleBase.generated.h"

USTRUCT(BlueprintType)
struct FGameLogPlayerSampleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayerID;
    
    FORTNITEGAME_API FGameLogPlayerSampleBase();
};

