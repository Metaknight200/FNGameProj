#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "RepParamBaseArray.generated.h"

class UActorComponent_ReplicatedParamHelper;

USTRUCT(BlueprintType)
struct FRepParamBaseArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    UActorComponent_ReplicatedParamHelper* CachedRepParamHelperComponent;
    
    FORTNITEGAME_API FRepParamBaseArray();
};

