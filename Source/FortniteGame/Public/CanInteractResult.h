#pragma once
#include "CoreMinimal.h"
#include "CanInteractResult.generated.h"

class AFortPlayerController;
class AFortPlayerPawn;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FCanInteractResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerPawn> RequestingPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerController> RequestingPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> InteractComponent;
    
    FORTNITEGAME_API FCanInteractResult();
};

