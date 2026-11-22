#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "FortControllerEffect_ApplyGameplayEffectBase.h"
#include "FortControllerEffect_HealPlayer.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortControllerEffect_HealPlayer : public UFortControllerEffect_ApplyGameplayEffectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HealthRestoreQuantity;
    
public:
    UFortControllerEffect_HealPlayer();

};

