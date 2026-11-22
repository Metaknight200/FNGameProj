#pragma once
#include "CoreMinimal.h"
#include "FortDagwoodCmd.h"
#include "DagwoodFutureClientInput.generated.h"

USTRUCT(BlueprintType)
struct FDagwoodFutureClientInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortDagwoodCmd InputCmd;
    
    VALETRUNTIME_API FDagwoodFutureClientInput();
};

