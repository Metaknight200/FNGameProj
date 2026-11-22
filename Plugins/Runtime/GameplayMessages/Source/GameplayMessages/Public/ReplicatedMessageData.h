#pragma once
#include "CoreMinimal.h"
#include "ReplicatedMessageData.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct FReplicatedMessageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* StructType;
    
    GAMEPLAYMESSAGES_API FReplicatedMessageData();
};

