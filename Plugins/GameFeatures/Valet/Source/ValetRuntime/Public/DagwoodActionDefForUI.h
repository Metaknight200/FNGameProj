#pragma once
#include "CoreMinimal.h"
#include "ActionDefForUI.h"
#include "DagwoodActionDefForUI.generated.h"

USTRUCT(BlueprintType)
struct FDagwoodActionDefForUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionDefForUI> ActionDefForUI;
    
    VALETRUNTIME_API FDagwoodActionDefForUI();
};

