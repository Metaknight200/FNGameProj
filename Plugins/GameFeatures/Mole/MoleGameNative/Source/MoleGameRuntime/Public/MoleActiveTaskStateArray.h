#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MoleActiveTaskState.h"
#include "MoleActiveTaskStateArray.generated.h"

USTRUCT(BlueprintType)
struct FMoleActiveTaskStateArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMoleActiveTaskState> TaskStateArray;
    
public:
    MOLEGAMERUNTIME_API FMoleActiveTaskStateArray();
};

