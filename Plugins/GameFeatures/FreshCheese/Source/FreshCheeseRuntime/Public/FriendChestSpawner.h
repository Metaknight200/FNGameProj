#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FriendChestSpawner.generated.h"

class UFriendChestAnalytics;

UCLASS(Blueprintable)
class AFriendChestSpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFriendChestAnalytics*> SpawnFailureAnalytics;
    
public:
    AFriendChestSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerFriendChestSpawn();
    
    UFUNCTION(BlueprintCallable)
    void SendEndSpawnAnalytics();
    
    UFUNCTION(BlueprintCallable)
    void NotifySpawnFailure(const FString& Reason, const int32 SquadId);
    
    UFUNCTION(BlueprintCallable)
    void LogSpawnerMessage(const FString& Message);
    
};

