#pragma once
#include "CoreMinimal.h"
#include "DagwoodInternal.h"
#include "DagwoodOutContinuous.h"
#include "DagwoodOutPersistent.h"
#include "DagwoodState_PT.generated.h"

USTRUCT(BlueprintType)
struct FDagwoodState_PT {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDagwoodInternal internal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDagwoodOutPersistent OutPersistent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDagwoodOutContinuous OutContinuous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutValid;
    
    VALETRUNTIME_API FDagwoodState_PT();
};

