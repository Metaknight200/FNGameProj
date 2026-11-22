#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_Mash.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_Mash : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_Mash();

    UFUNCTION(BlueprintCallable, Exec)
    void MashWin();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MashFinalPhase();
    
};

