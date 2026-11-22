#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SkyfireAudioManager.generated.h"

class AFortAthenaMutator_Skyfire;
class AFortPlayerPawnAthena;

UCLASS(Blueprintable, MinimalAPI)
class ASkyfireAudioManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Skyfire* SkyfireMutator;
    
public:
    ASkyfireAudioManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void PostInitSkyfireMutator();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnTimeOrbSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnSecurityOrbSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPawnInMothershipChanged(AFortPlayerPawnAthena* PlayerPawn, bool bInMothership);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnKnockedOutPenaltyComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnKnockedOutOfPlayspace();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnExitingPlayspace(const bool bFromWarpTunnel);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnEnteringPlayspace();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnEnteringMainMap(const AFortPlayerPawnAthena* PlayerPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnEnteringLootRoom();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    AFortAthenaMutator_Skyfire* GetSkyfireMutator() const;
    
};

