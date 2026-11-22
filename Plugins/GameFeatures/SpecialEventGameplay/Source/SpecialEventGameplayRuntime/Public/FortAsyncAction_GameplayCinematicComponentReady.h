#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnGameplayCineCompReadyDelegate.h"
#include "FortAsyncAction_GameplayCinematicComponentReady.generated.h"

class AController;
class UFortAsyncAction_GameplayCinematicComponentReady;

UCLASS(Blueprintable)
class UFortAsyncAction_GameplayCinematicComponentReady : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameplayCineCompReady OnReady;
    
    UFortAsyncAction_GameplayCinematicComponentReady();

    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_GameplayCinematicComponentReady* FindGameplayCinematicComponentAsync(AController* Conroller);
    
};

