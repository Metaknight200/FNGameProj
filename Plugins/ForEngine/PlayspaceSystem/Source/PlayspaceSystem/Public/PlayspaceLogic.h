#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayspaceLogic.generated.h"

class APlayspace;

UCLASS(Blueprintable)
class PLAYSPACESYSTEM_API APlayspaceLogic : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayspace* Playspace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStartMatchOnServerStart;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bMatchHasEnded, meta=(AllowPrivateAccess=true))
    bool bMatchHasEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MatchStartTime, meta=(AllowPrivateAccess=true))
    float MatchStartTime;
    
public:
    APlayspaceLogic(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MatchStartTime();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_bMatchHasEnded();
    
};

