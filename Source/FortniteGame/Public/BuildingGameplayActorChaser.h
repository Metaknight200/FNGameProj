#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ScalableFloat.h"
#include "EventMessageTag.h"
#include "GameplayTagContainer.h"
#include "BuildingGameplayActor.h"
#include "ChaserPatrolTurnData.h"
#include "BuildingGameplayActorChaser.generated.h"

class AActor;
class AFortPlayerPawn;
class UCapsuleComponent;
class UFortProjectileMoveComp_Chase;
class UObject;

UCLASS(Blueprintable)
class ABuildingGameplayActorChaser : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortProjectileMoveComp_Chase* FortProjectileMoveComp_Chase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetPlayerSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetNpcSocketName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* ForcedMovementTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMessageTag AttachedMessageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMessageTag DetachedMessageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMessageTag SetMarkerPositionMessageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMessageTag TargetDamagedMessageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ChaseTarget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ValidTargetQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TargetingRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> TargetObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TargetingPrioritizePlayersOverNpcs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ChaseDistanceFromTargetToAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PatrolTargetHeightAboveGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PatrolNewDirectionMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PatrolNewDirectionMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PatrolDriftRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PatrolMoveSpeedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PatrolMoveSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PatrolGroundFindDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> PatrolAvoidObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PatrolTurnSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PatrolTurnData, meta=(AllowPrivateAccess=true))
    FChaserPatrolTurnData PatrolTurnData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PotentialTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetachedNetCullDistanceSquared;
    
public:
    ABuildingGameplayActorChaser(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void TargetSearchComplete(bool WasCancelled);
    
    UFUNCTION(BlueprintCallable)
    void StayAboveWater();
    
    UFUNCTION(BlueprintCallable)
    void ShouldCancelTargetSearch(bool& bShouldCancel);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHealthBarMarkerPosition(float MarkerPosition);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetChaseTarget(AActor* InChaseTarget, bool bInHomeOnChaseTarget, float InTargetReachedDistanceOverride);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RandomNewPatrolDestination();
    
    UFUNCTION(BlueprintCallable)
    void PotentialTargetFound(AActor* InDetectedItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetAcquired();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PatrolTurnData();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, NetMulticast, Reliable)
    void MulticastNetCullDistance(float DistanceSquared);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void LookForNewTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidTarget(UObject* PotentialTarget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetChaseTarget();
    
    UFUNCTION(BlueprintCallable)
    void ForcePlayerForwardMovement(AFortPlayerPawn* Player, float MaxSpeedScale);
    
    UFUNCTION(BlueprintCallable)
    void EndForcedPlayerForwardMovement();
    
    UFUNCTION(BlueprintCallable)
    void DetachedFromChaseTarget();
    
    UFUNCTION(BlueprintCallable)
    void ChaseTargetDamaged();
    
    UFUNCTION(BlueprintCallable)
    void AttachedToChaseTarget();
    
};

