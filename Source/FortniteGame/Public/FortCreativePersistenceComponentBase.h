#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameFramework/OnlineReplStructs.h"
#include "LevelSaveSpawnable.h"
#include "FortCreativePersistenceComponentBase.generated.h"

class AFortMinigame;
class AFortPlayerState;
class UFortMinigameLogicComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortCreativePersistenceComponentBase : public UActorComponent, public ILevelSaveSpawnable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortMinigameLogicComponent* LogicComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BasePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NonUniquePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUniqueForOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGuid PersistenceID;
    
public:
    UFortCreativePersistenceComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUniqueForOwner(bool bInUniqueForOwner);
    
    UFUNCTION(BlueprintCallable)
    void SaveData(const UObject* Data, const FUniqueNetIdRepl& PlayerID, const FString& SavePath);
    
    UFUNCTION(BlueprintCallable)
    void LoadData(const FUniqueNetIdRepl& PlayerID, const FString& SavePath, UObject* OutData);
    
    UFUNCTION(BlueprintCallable)
    void InitializePersistenceComponent(UFortMinigameLogicComponent* InLogicComponent, bool bInUniqueForOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPersistencePlayers(TArray<AFortPlayerState*>& PersistencePlayers) const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateNewPersistentIDAndResaveActor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnablePersistence(AFortMinigame* FortMinigame);
    
    UFUNCTION(BlueprintCallable)
    void DisablePersistence(AFortMinigame* FortMinigame);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearData(const FUniqueNetIdRepl& PlayerID, const FString& SavePath);
    

    // Fix for true pure virtual functions not being implemented
};

