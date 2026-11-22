#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_PlayNiagaraEffect.h"
#include "FortAnimNotify_PlayNiagaraEffectVariant.generated.h"

class UAthenaCosmeticItemDefinition;

UCLASS(Blueprintable, CollapseCategories)
class UFortAnimNotify_PlayNiagaraEffectVariant : public UAnimNotify_PlayNiagaraEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCosmeticItemDefinition* CosmeticDefContainingVariants;
    
public:
    UFortAnimNotify_PlayNiagaraEffectVariant();

};

