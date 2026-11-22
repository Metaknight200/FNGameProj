#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_Rebirth.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_Rebirth : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_Rebirth();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void PromoteItems();
    
};

