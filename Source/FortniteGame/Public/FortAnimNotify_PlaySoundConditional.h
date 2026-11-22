#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify_PlaySound.h"
#include "FortAnimNotify_PlaySoundConditional.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class UFortAnimNotify_PlaySoundConditional : public UAnimNotify_PlaySound {
    GENERATED_BODY()
public:
    UFortAnimNotify_PlaySoundConditional();

    virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldTriggerAnimNotify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;
    
};

