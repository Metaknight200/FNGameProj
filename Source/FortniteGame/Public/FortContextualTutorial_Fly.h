#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_Fly.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class UFortContextualTutorial_Fly : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_Fly();

private:
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChange(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void HandleStartSkydivingForActivation();
    
    UFUNCTION(BlueprintCallable)
    void HandlePawnLanded(const FHitResult& Hit);
    
};

