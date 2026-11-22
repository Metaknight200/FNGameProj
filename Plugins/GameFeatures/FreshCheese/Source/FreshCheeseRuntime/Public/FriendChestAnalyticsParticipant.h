#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FriendChestAnalyticsLootRoll.h"
#include "FriendChestAnalyticsParticipant.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FFriendChestAnalyticsParticipant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccountId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnCoordinates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFriendChestAnalyticsLootRoll> InstancedLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFriendChestAnalyticsLootRoll> FailedLoot;
    
public:
    FRESHCHEESERUNTIME_API FFriendChestAnalyticsParticipant();
};

