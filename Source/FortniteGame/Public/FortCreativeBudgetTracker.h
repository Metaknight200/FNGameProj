#pragma once
#include "CoreMinimal.h"
#include "FortCreativeBudget.h"
#include "FortCreativeBudgetTracker.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FFortCreativeBudgetTracker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeBudget> Budgets;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> AssetInstances;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> AssetLastInstances;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UObject>, int32> UsedAssetDependencies;
    
public:
    FORTNITEGAME_API FFortCreativeBudgetTracker();
};

