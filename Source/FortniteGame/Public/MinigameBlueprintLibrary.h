#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MinigameBlueprintLibrary.generated.h"

class AActor;
class AFortMinigame;

UCLASS(Blueprintable)
class UMinigameBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMinigameBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static AFortMinigame* GetMinigameForActor(const AActor* Actor);
    
};

