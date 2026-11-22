#pragma once
#include "CoreMinimal.h"
#include "PawnBountyInteractionInfo.generated.h"

class AFortPlayerPawn;

USTRUCT(BlueprintType)
struct FPawnBountyInteractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* PawnInTriggerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBountyAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBountyInProgress;
    
    FORTNITEGAME_API FPawnBountyInteractionInfo();
};

