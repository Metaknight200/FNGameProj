#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortPlayspaceReplicatedState.generated.h"

class UActorComponent_ReplicatedParamHelper;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayspaceReplicatedState : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorComponent_ReplicatedParamHelper* CachedRepParamHelper;
    
public:
    AFortPlayspaceReplicatedState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerInOwningPlayspace(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActorComponent_ReplicatedParamHelper* GetReplicatedParamHelper() const;
    
};

