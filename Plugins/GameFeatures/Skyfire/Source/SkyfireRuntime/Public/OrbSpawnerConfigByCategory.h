#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "EOrbSpawnerConfigCategory.h"
#include "OrbSpawnerConfigByCategory.generated.h"

USTRUCT(BlueprintType)
struct FOrbSpawnerConfigByCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EOrbSpawnerConfigCategory, FScalableFloat> ValuesByCategory;
    
    SKYFIRERUNTIME_API FOrbSpawnerConfigByCategory();
};

