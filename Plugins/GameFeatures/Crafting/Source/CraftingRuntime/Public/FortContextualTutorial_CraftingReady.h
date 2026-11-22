#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_CraftingReady.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorial_CraftingReady : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_CraftingReady();

private:
    UFUNCTION(BlueprintCallable)
    void HandleFormulaCraftableChanged(const FName& FormulaRowName, bool bIsCraftable);
    
};

