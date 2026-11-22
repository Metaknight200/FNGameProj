#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortCinematicElement.generated.h"

USTRUCT(BlueprintType)
struct FFortCinematicElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ElementState;
    
    MOLEGAMERUNTIME_API FFortCinematicElement();
};

