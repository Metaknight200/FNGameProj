#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortControllerEffect.h"
#include "Templates/SubclassOf.h"
#include "FortControllerEffect_ApplyGameplayEffectBase.generated.h"

class UGameplayEffect;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class UFortControllerEffect_ApplyGameplayEffectBase : public UFortControllerEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetMagnitudeFromParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ParameterName;
    
    UFortControllerEffect_ApplyGameplayEffectBase();

};

