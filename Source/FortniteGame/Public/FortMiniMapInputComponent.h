#pragma once
#include "CoreMinimal.h"
#include "Components/InputComponent.h"
#include "FortMiniMapInputComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortMiniMapInputComponent : public UInputComponent {
    GENERATED_BODY()
public:
    UFortMiniMapInputComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void HandleFullScreenMapToggled(bool bMapVisible);
    
};

