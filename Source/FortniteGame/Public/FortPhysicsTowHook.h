#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "NetTowhookAttachState.h"
#include "FortPhysicsTowHook.generated.h"

UCLASS(Blueprintable, Config=Game)
class AFortPhysicsTowHook : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedAttachStates, meta=(AllowPrivateAccess=true))
    TArray<FNetTowhookAttachState> ReplicatedAttachStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* AlwaysAttachedActor;
    
public:
    AFortPhysicsTowHook(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedAttachStates();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStartPoint(FVector& OutStartPoint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEndPoint(FVector& OutEndPoint) const;
    
};

