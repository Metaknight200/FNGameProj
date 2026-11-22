#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FortAthenaLoadout.h"
#include "FortControllerComponent.h"
#include "GameplayTagContainer.h"
#include "KiwiControllerComponent.generated.h"

class ACharacter;
class AFortPlayerMannequin;
class AFortPlayerPawn;
class AFortSkyTube;
class AFortSquadStart;
class AKiwiKevinCubeInteractActor;
class ALevelSequenceActor;
class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIWIPLAYLISTRUNTIME_API UKiwiControllerComponent : public UFortControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PrisonBlockIdentificationTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortSquadStart* PrisonTeleportSquadStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerMannequin*> LocalSpaceMannequins;
    
public:
    UKiwiControllerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void UpdateSpaceMannequinCosmeticLoadout(AFortPlayerMannequin* Mannequin, const FFortAthenaLoadout Loadout);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RegisterLocalSpaceMannequin(AFortPlayerMannequin* SpacePlayerMannequin, const int32 MannequinIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayPrisonAlienPatrolSequence();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPawnZapEffects(const TArray<AFortPlayerPawn*>& PawnsToKill, const FGameplayTag& ZapReason);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSkyTubeChanged(AFortPlayerPawn* Pawn, AFortSkyTube* NewSkyTube, AFortSkyTube* OldSkyTube);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPawnPossessed(APawn* PossessedPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, uint8 PreviousCustomMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortSquadStart* GetPrisonTeleportSquadStart() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    ALevelSequenceActor* GetPrisonAlienPatrolSequenceActorForBlock(const FGameplayTag& PrisonBlockTag) const;
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientZapPawns(const TArray<AFortPlayerPawn*>& PawnsToKill, const FGameplayTag& ZapReason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetupSpaceMannequins(const TArray<AFortPlayerPawn*>& PlayerPawnsToLoadoutCopy);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetEnableKevinCubeInteract(const AKiwiKevinCubeInteractActor* KevinCubeInteractActor, bool bInteracting);
    
};

