#pragma once
#include "CoreMinimal.h"
#include "MoleTaskMessagePayload.generated.h"

class AFortPlayerController;
class AFortPlayerState;
class UMoleTaskDataAsset;

USTRUCT(BlueprintType)
struct FMoleTaskMessagePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoleTaskDataAsset* TaskAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerState* AssociatedPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* AssociatedPlayerController;
    
    MOLEGAMERUNTIME_API FMoleTaskMessagePayload();
};

