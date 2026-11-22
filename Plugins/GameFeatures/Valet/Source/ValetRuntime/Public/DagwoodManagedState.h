#pragma once
#include "CoreMinimal.h"
#include "DagwoodFutureClientInput.h"
#include "DagwoodInPersistent.h"
#include "DagwoodState_PT.h"
#include "FortDagwoodCmd.h"
#include "DagwoodManagedState.generated.h"

class APlayerController;

USTRUCT(BlueprintType)
struct FDagwoodManagedState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortDagwoodCmd InputCmd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDagwoodInPersistent GT_State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDagwoodState_PT PT_State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    APlayerController* PC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDagwoodFutureClientInput> FutureInputs;
    
    VALETRUNTIME_API FDagwoodManagedState();
};

