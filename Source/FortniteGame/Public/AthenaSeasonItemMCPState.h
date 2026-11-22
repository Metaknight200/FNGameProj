#pragma once
#include "CoreMinimal.h"
#include "EAthenaSeasonMapIconState.h"
#include "AthenaSeasonItemMCPState.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAthenaSeasonItemMCPState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaSeasonMapIconState MapIconState;
    
    FAthenaSeasonItemMCPState();
};

