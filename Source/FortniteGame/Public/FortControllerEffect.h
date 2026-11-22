#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EffectRequestContext.h"
#include "FortControllerEffect.generated.h"

class AController;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortControllerEffect : public UObject {
    GENERATED_BODY()
public:
    UFortControllerEffect();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyEffectInternal(AController* TargetController, const FEffectRequestContext& RequestContext) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ApplyEffect(AController* TargetController, const FEffectRequestContext& RequestContext) const;
    
};

