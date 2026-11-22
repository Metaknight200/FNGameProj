#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "LevelRecordSpawner.generated.h"

class AActor;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class FORTNITEGAME_API ULevelRecordSpawner : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ActorClassesThatWereAlreadyLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedActors;
    
public:
    ULevelRecordSpawner();

private:
    UFUNCTION(BlueprintCallable)
    void FailsafeTimerExpired();
    
};

