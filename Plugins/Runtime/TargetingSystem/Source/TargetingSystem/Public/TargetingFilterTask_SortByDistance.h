#pragma once
#include "CoreMinimal.h"
#include "TargetingTask.h"
#include "TargetingFilterTask_SortByDistance.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTargetingFilterTask_SortByDistance : public UTargetingTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAscending: 1;
    
public:
    UTargetingFilterTask_SortByDistance();

};

