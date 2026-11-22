#pragma once
#include "CoreMinimal.h"
#include "ChaseExternalForce.h"
#include "FortProjectileMovementComponent.h"
#include "FortProjectileMoveComp_Chase.generated.h"

class USceneComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortProjectileMoveComp_Chase : public UFortProjectileMovementComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChaseTargetReachedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChaseTargetReachedDelegate OnChaseTargetReached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* InternalChaseTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ChaseTargetSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ChaseTargetReachedDistance;
    
public:
    UFortProjectileMoveComp_Chase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetChaseTarget(USceneComponent* InChaseTarget, FName InSocketName, float InTargetReachedDistance, bool bInHomeOnChaseTarget);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastAddExternalForce(const FChaseExternalForce& ExternalForce);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearExternalForces();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClearChaseTarget();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddExternalForce(const FChaseExternalForce& ExternalForce);
    
};

