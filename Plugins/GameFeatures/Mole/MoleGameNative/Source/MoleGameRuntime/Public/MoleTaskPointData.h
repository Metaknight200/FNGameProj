#pragma once
#include "CoreMinimal.h"
#include "MoleTaskPointData.generated.h"

class AMoleTaskPoint;

USTRUCT(BlueprintType)
struct FMoleTaskPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMoleTaskPoint* TaskPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
    MOLEGAMERUNTIME_API FMoleTaskPointData();
};

