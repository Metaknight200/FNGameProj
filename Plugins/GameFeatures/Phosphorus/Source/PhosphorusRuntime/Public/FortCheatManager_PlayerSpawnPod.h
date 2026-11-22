#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_PlayerSpawnPod.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_PlayerSpawnPod : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_PlayerSpawnPod();

    UFUNCTION(BlueprintCallable, Exec)
    void PlayerSpawnPodTest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayerSpawnPodDebug(float TextScale);
    
};

