#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "EBodyguardPlayerRole.h"
#include "BodyguardPlayerComponent.generated.h"

class AController;
class AFortAthenaMutator_Bodyguard;
class AFortPawn;
class AFortPlayerStateAthena;
class UAnimMontage;
class UFortItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBodyguardPlayerComponent : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsReviving;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BodyguardRole, meta=(AllowPrivateAccess=true))
    EBodyguardPlayerRole BodyguardRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Bodyguard* ManagingMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bEnableSkinSwapping;
    
public:
    UBodyguardPlayerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetIsBodyguardTooFarFromVIP(const bool bValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_BodyguardRole();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerRevived(const AController* EventInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnPlacementSet(AFortPlayerStateAthena* Sender, int32 NewPlace);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPawnStartedEmote(UFortItemDefinition* MontageItemDef, AFortPawn* PawnEmoting);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFortPCPawnChangedEvent(AFortPawn* NewPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnEmoteMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkinSwappingEnabled() const;
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPlayerEliminatedVIP();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnVIPHasBeenReassigned(const AFortPlayerStateAthena* NewVIPlayerState);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnTeamEliminated();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnNotifyVIPTeammateIsDowned();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnLocalSquadVIPTookDamage();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnBodyguardIsTooFarFromVIP();
    
};

