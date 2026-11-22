#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ModifyIncomingPawnDamageDefinition.generated.h"

USTRUCT(BlueprintType)
struct FModifyIncomingPawnDamageDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IncludeDamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExcludeDamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DamageMultiplier;
    
    PHOSPHORUSWIPEOUTRUNTIME_API FModifyIncomingPawnDamageDefinition();
};

