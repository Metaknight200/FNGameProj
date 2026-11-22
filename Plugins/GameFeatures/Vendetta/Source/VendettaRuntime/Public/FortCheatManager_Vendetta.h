#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Wax.h"
#include "FortCheatManager_Vendetta.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_Vendetta : public UFortCheatManager_Wax {
    GENERATED_BODY()
public:
    UFortCheatManager_Vendetta();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void VendettaSpawnTankAI(float Distance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void VendettaSpawnSniperAI(float Distance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void VendettaSpawnMasterAI(float Distance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void VendettaSpawnCloserAI(float Distance);
    
};

