#pragma once
#include "CoreMinimal.h"
#include "EventMessageTag.h"
#include "MolePlayerTeleportedReplicatedData.generated.h"

USTRUCT(BlueprintType)
struct FMolePlayerTeleportedReplicatedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMessageTag MessageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReplicationCount;
    
    MOLEGAMERUNTIME_API FMolePlayerTeleportedReplicatedData();
};

