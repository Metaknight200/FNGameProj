#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_CraftingComplete.generated.h"

class AActor;
class AFortPlayerController;

UCLASS(Blueprintable)
class UFortContextualTutorial_CraftingComplete : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_CraftingComplete();

private:
    UFUNCTION(BlueprintCallable)
    void OnCraftingSuccess(AFortPlayerController* Instigator, AActor* CraftingObject, const FName& FormulaRowName);
    
};

