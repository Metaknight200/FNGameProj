#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraLensEffectInterface.h"
#include "NiagaraActor.h"
#include "Templates/SubclassOf.h"
#include "NiagaraLensEffectBase.generated.h"

class AActor;
class APlayerCameraManager;
class UFXSystemComponent;

UCLASS(Abstract, Blueprintable)
class FORTNITECOMPATIBILITY_API ANiagaraLensEffectBase : public ANiagaraActor, public ICameraLensEffectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform DesiredRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseAuthoredFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowMultipleInstances: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bResetWhenRetriggered: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> EmittersToTreatAsSame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCameraManager* OwningCameraManager;
    
public:
    ANiagaraLensEffectBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UFXSystemComponent* GetPrimaryParticleComponent() const override PURE_VIRTUAL(GetPrimaryParticleComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    TArray<UFXSystemComponent*> GetParticleComponents() const override PURE_VIRTUAL(GetParticleComponents, return TArray<UFXSystemComponent*>(););
    
public:
    virtual void PostRegisterAllComponents() override { AActor::PostRegisterAllComponents(); }
#if WITH_EDITOR
    virtual bool GetReferencedContentObjects(TArray<UObject*>& Objects) const override { return AActor::GetReferencedContentObjects(Objects); }
#endif
};

