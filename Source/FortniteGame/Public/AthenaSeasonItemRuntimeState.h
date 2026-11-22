#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EAthenaSeasonMapIconState.h"
#include "AthenaSeasonItemRuntimeState.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAthenaSeasonItemRuntimeState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaSeasonMapIconState MapIconState;
    
    FAthenaSeasonItemRuntimeState();
};

