#pragma once
#include "CoreMinimal.h"
#include "MoleRevealedEnemies.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FMoleRevealedEnemies {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> EnemyPlayerStates;
    
    MOLEGAMERUNTIME_API FMoleRevealedEnemies();
};

