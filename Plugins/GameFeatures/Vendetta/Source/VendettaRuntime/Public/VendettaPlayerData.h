#pragma once
#include "CoreMinimal.h"
#include "VendettaPlayerData.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FVendettaPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastPlayerSpawnTime;
    
    VENDETTARUNTIME_API FVendettaPlayerData();
};

