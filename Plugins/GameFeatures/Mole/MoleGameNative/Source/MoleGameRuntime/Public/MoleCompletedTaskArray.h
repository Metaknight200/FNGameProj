#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MoleCompletedTask.h"
#include "MoleCompletedTaskArray.generated.h"

USTRUCT(BlueprintType)
struct FMoleCompletedTaskArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMoleCompletedTask> CompletedTaskArray;
    
public:
    MOLEGAMERUNTIME_API FMoleCompletedTaskArray();
};

