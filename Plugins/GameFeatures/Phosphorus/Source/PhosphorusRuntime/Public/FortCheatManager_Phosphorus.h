#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_Phosphorus.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_Phosphorus : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_Phosphorus();

    UFUNCTION(BlueprintCallable, Exec)
    void PhosphorusSetNumRoundsToWin(const int32 NumRounds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PhosphorusForceStartMatch();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PhosphorusEndRound();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PhosphorusEndMatch();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PhosphorusDebug(float TextScale);
    
};

