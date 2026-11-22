#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MoleActiveTaskStateHandle.h"
#include "MoleCompletedTask.generated.h"

class UMoleTaskDataAsset;

USTRUCT(BlueprintType)
struct FMoleCompletedTask : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMoleTaskDataAsset* TaskAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMoleActiveTaskStateHandle StateHandle;
    
    MOLEGAMERUNTIME_API FMoleCompletedTask();
};

