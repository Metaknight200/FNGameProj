#pragma once
#include "CoreMinimal.h"
#include "BuildingGameplayActor.h"
#include "MoleEliminationMarker.generated.h"

class APlayerState;

UCLASS(Blueprintable)
class AMoleEliminationMarker : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepresentedPlayer, meta=(AllowPrivateAccess=true))
    APlayerState* RepresentedPlayer;
    
public:
    AMoleEliminationMarker(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRepresentedPlayerSet();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepresentedPlayer();
    
};

