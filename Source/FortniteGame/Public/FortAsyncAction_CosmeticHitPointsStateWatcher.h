#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FortAsyncAction_CosmeticHitPointsStateWatcher.generated.h"

class AFortPlayerStateAthena;
class UFortAsyncAction_CosmeticHitPointsStateWatcher;

UCLASS(Blueprintable)
class UFortAsyncAction_CosmeticHitPointsStateWatcher : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnWatchedHitPointsChanged, float, Health, float, MaxHealth, float, Shield, float, MaxShield);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWatchedHitPointsChanged OnHitPointsChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* MyPlayerState;
    
public:
    UFortAsyncAction_CosmeticHitPointsStateWatcher();

    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_CosmeticHitPointsStateWatcher* WatchPlayerHealth(AFortPlayerStateAthena* PlayerState);
    
};

