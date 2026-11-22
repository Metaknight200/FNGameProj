#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MoleGenericMessagePayload.generated.h"

class AFortPlayerState;

USTRUCT(BlueprintType)
struct FMoleGenericMessagePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ContextTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerState* SourcePlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerState* TargetPlayerState;
    
    MOLEGAMERUNTIME_API FMoleGenericMessagePayload();
};

