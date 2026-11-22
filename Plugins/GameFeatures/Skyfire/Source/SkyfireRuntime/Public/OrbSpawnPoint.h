#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OrbSpawnPoint.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FOrbSpawnPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorAtSpawnPoint;
    
    SKYFIRERUNTIME_API FOrbSpawnPoint();
};

