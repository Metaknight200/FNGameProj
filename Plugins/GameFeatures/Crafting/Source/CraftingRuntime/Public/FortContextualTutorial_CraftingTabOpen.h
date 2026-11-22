#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_CraftingTabOpen.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorial_CraftingTabOpen : public UFortContextualTutorial {
    GENERATED_BODY()
public:
    UFortContextualTutorial_CraftingTabOpen();

private:
    UFUNCTION(BlueprintCallable)
    void HandleInventoryTabChanged(const FName InventoryTabNameId);
    
    UFUNCTION(BlueprintCallable)
    void HandleFormulaCraftableChanged(const FName& FormulaRowName, bool bIsCraftable);
    
};

