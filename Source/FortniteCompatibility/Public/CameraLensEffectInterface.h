#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CameraLensEffectInterface.generated.h"

class UFXSystemComponent;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class FORTNITECOMPATIBILITY_API UCameraLensEffectInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITECOMPATIBILITY_API ICameraLensEffectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual UFXSystemComponent* GetPrimaryParticleComponent() const PURE_VIRTUAL(GetPrimaryParticleComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<UFXSystemComponent*> GetParticleComponents() const PURE_VIRTUAL(GetParticleComponents, return TArray<UFXSystemComponent*>(););
    
};

