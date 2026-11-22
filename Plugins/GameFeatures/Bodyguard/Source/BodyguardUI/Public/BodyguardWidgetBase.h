#pragma once
#include "CoreMinimal.h"
#include "EBodyguardPlayerRole.h"
#include "EAthenaGamePhase.h"
#include "LTMWidgetBase.h"
#include "BodyguardWidgetBase.generated.h"

class AFortAthenaMutator_Bodyguard;
class AFortGameplayMutator;
class AFortPlayerState;
class AFortPlayerStateAthena;
class UAthenaPlayerViewModel;

UCLASS(Blueprintable, EditInlineNew)
class UBodyguardWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Bodyguard* CachedBodyguardMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaPlayerViewModel* CachedPlayerVM;
    
public:
    UBodyguardWidgetBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEnemyVIPCount_BP(const uint8 EnemyVIPCount);
    
    UFUNCTION(BlueprintCallable)
    void OnMutatorAvailable(AFortGameplayMutator* MutatorActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MutatorReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleVIPTookDamage_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePlayerRoleChange_BP(const EBodyguardPlayerRole NewPlayerRole);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnVIPDataChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnTeamVIPReassignment_BP(const AFortPlayerStateAthena* NewVIPPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnRevealPlayerRole_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnNotifyVIPTeammateDBNO_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnGamePhaseChanged_BP(EAthenaGamePhase NewPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnBodyguardIsTooFarFromBodyguard_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleLocalPlayerEliminatedVIP_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerState* GetVIPPlayerStateForTeam(uint8 TeamNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBodyguardPlayerRole GetOwningPlayerRole() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortAthenaMutator_Bodyguard* GetBodyguardMutator() const;
    
};

