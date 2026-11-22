#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h"
#include "FortAnimNotify_PlayParticleConditional.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class UFortAnimNotify_PlayParticleConditional : public UAnimNotify_PlayParticleEffect {
    GENERATED_BODY()
public:
    UFortAnimNotify_PlayParticleConditional();

    virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldTriggerAnimNotify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;
    
};

