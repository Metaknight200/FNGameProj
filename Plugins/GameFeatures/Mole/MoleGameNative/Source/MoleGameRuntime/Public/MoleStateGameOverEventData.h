#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMoleRole.h"
#include "MoleStateGameOverEventData.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FMoleStateGameOverEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameOverReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoleRole WinningRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> WinningPlayerStates;
    
    MOLEGAMERUNTIME_API FMoleStateGameOverEventData();
};

