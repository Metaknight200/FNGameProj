#pragma once
#include "CoreMinimal.h"
#include "PlayerBindTracking.generated.h"

class AFortPlayerController;

USTRUCT(BlueprintType)
struct FPlayerBindTracking {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerController> PlayerController;
    
    FORTNITEGAME_API FPlayerBindTracking();
};

