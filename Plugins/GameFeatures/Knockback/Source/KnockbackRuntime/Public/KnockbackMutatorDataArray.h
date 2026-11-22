#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "KnockbackMutatorData.h"
#include "KnockbackMutatorDataArray.generated.h"

USTRUCT(BlueprintType)
struct FKnockbackMutatorDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKnockbackMutatorData> Entries;
    
    KNOCKBACKRUNTIME_API FKnockbackMutatorDataArray();
};

