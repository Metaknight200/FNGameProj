#pragma once
#include "CoreMinimal.h"
#include "FortInventory_SaveEntry.h"
#include "PendingToApplyData.generated.h"

class AFortMinigame;
class AFortPlayerControllerAthena;
class APlayerState;

USTRUCT(BlueprintType)
struct FPendingToApplyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerControllerAthena> PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerState> PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortMinigame> Minigame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortInventory_SaveEntry SaveEntry;
    
    FORTNITEGAME_API FPendingToApplyData();
};

