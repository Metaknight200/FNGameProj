#pragma once
#include "CoreMinimal.h"
#include "KiwiSquadStartList.generated.h"

class AFortSquadStart;

USTRUCT(BlueprintType)
struct FKiwiSquadStartList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortSquadStart*> SquadStarts;
    
    KIWIPLAYLISTRUNTIME_API FKiwiSquadStartList();
};

