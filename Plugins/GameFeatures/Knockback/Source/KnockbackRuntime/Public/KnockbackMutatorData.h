#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "KnockbackMutatorData.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct KNOCKBACKRUNTIME_API FKnockbackMutatorData : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockbackMultiplier;
    
    FKnockbackMutatorData();
};

