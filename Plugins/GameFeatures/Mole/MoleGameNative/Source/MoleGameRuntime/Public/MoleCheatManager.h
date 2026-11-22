#pragma once
#include "CoreMinimal.h"
#include "ChildCheatManager.h"
#include "GameplayTagContainer.h"
#include "MoleCheatManager.generated.h"

UCLASS(Blueprintable)
class UMoleCheatManager : public UChildCheatManager {
    GENERATED_BODY()
public:
    UMoleCheatManager();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SpawnMoleBots(int32 NumBotsToSpawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SkipLobbyBackfillLogic();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void MoleRequestSaboteur();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void MoleInterruptSelfTasks();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void MoleInterruptAllTasks();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void MoleEnableSelfTasks();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void MoleEnableAllTasks();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void MoleDisableSelfTasks();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void MoleDisableAllTasks();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void MoleClearRequestSaboteur();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void MakeTargetMoleGhost();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void MakeSelfMoleGhost();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GrantTask(const FString& TaskAssetName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GoToStateVoting();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GoToStateLobby();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GoToStateGameplay();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GoToStateGameover(const FGameplayTag& InTag);
    
};

