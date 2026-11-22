#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerStateComponent.h"
#include "EMoleRole.h"
#include "MoleDeathInformation.h"
#include "MolePlayerCosmeticData.h"
#include "MolePlayerTeleportedReplicatedData.h"
#include "OnPlayerBecameGhostDelegate.h"
#include "Templates/SubclassOf.h"
#include "MolePlayerStateComponent.generated.h"

class AActor;
class AController;
class AMoleEliminationMarker;
class APlayerState;
class UFortItemDefinition;
class UGameplayEffect;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMolePlayerStateComponent : public UPlayerStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerBecameGhost OnPlayerBecameGhost;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerNumber, meta=(AllowPrivateAccess=true))
    int32 PlayerNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DeathInfo, meta=(AllowPrivateAccess=true))
    FMoleDeathInformation DeathInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GhostGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMoleEliminationMarker> EliminationMarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Role, meta=(AllowPrivateAccess=true))
    EMoleRole Role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EnemyPlayerStates, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> EnemyPlayerStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bIsRevealedEnemy, meta=(AllowPrivateAccess=true))
    bool bIsRevealedEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bHasLeftGame, meta=(AllowPrivateAccess=true))
    bool bHasLeftGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_KillerPlayerState, meta=(AllowPrivateAccess=true))
    APlayerState* KillerPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GhostBlockedAbilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerTeleportedData, meta=(AllowPrivateAccess=true))
    FMolePlayerTeleportedReplicatedData PlayerTeleportedData;
    
public:
    UMolePlayerStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static void SetMoleKiller(APlayerState* Victim, APlayerState* Killer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Role();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerTeleportedData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerNumber();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_KillerPlayerState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnemyPlayerStates();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DeathInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsRevealedEnemy();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bHasLeftGame();
    
public:
    UFUNCTION(BlueprintCallable)
    static bool IsMolePlayerDisconnected(const APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMoleGhost(const APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMoleEnemyFor(const APlayerState* PlayerState, const APlayerState* TargetPlayerState);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMoleEnemy(const AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMoleEliminated(const APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerNumber() const;
    
    UFUNCTION(BlueprintCallable)
    static EMoleRole GetMoleRole(AController* User);
    
    UFUNCTION(BlueprintCallable)
    static UFortItemDefinition* GetMolePlayerItemDefinition(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static void GetMolePlayerCosmeticData(APlayerState* PlayerState, FMolePlayerCosmeticData& OutPlayerCosmeticData);
    
    UFUNCTION(BlueprintCallable)
    static void BlueprintSetIsPlayerGhost(APlayerState* PlayerState, bool bIsPlayerGhost);
    
};

