#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NetworkPhysics.h"
#include "DagwoodInPersistent.h"
#include "DagwoodManagedState.h"
#include "DagwoodState_PT.h"
#include "FortDagwoodCmd.h"
#include "DagwoodNetworkPhysicsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDagwoodNetworkPhysicsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGeneratedLocalInputCmd);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FNetworkPhysicsState NetworkPhysicsState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGeneratedLocalInputCmd OnGeneratedLocalInputCmd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDagwoodManagedState ReplicatedManagedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDagwoodManagedState InManagedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDagwoodManagedState OutManagedState;
    
public:
    UDagwoodNetworkPhysicsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetState_GT(const FDagwoodInPersistent& In);
    
    UFUNCTION(BlueprintCallable)
    void SetPendingInputCmd(const FFortDagwoodCmd& In);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDagwoodState_PT GetState_PT() const;
    
    UFUNCTION(BlueprintCallable)
    FDagwoodInPersistent GetState_GT() const;
    
    UFUNCTION(BlueprintCallable)
    FFortDagwoodCmd GetPendingInputCmd() const;
    
};

