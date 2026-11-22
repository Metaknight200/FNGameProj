#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NiagaraLensEffectBase.h"
#include "FortDirectionCameraLensInterface.h"
#include "FortNiagaraCameraLensEffectDirectional.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI)
class AFortNiagaraCameraLensEffectDirectional : public ANiagaraLensEffectBase, public IFortDirectionCameraLensInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DamageDealer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DamageDealerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RotationParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRotateActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
public:
    AFortNiagaraCameraLensEffectDirectional(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetTint(const FLinearColor& Color) override PURE_VIRTUAL(SetTint,);
    
    UFUNCTION(BlueprintCallable)
    void SetStrength(float InStrength) override PURE_VIRTUAL(SetStrength,);
    
};

