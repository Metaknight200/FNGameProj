#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FortDecoHelper.h"
#include "FortProjectileDecoHelper.generated.h"

UCLASS(Blueprintable)
class AFortProjectileDecoHelper : public AFortDecoHelper {
    GENERATED_BODY()
public:
    AFortProjectileDecoHelper(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetShowDecoPreview(bool bInShowDecoPreview);
    
    UFUNCTION(BlueprintCallable)
    void SetGrenadeTrajectoryHitResult(const FHitResult& InHitResult);
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileThrown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvalidThrowTrapPosition() const;
    
};

