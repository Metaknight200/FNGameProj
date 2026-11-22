#pragma once
#include "CoreMinimal.h"
#include "ChildCheatManager.h"
#include "CraftingCheatManager.generated.h"

UCLASS(Blueprintable)
class UCraftingCheatManager : public UChildCheatManager {
    GENERATED_BODY()
public:
    UCraftingCheatManager();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void StartSelfCrafting(FName FormulaName);
    
};

