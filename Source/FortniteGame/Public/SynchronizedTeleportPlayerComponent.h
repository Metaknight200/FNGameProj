#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "SynchronizedTeleportFadeOutReplicationData.h"
#include "SynchronizedTeleportPlayerComponent.generated.h"

class AFortPlayerControllerAthena;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API USynchronizedTeleportPlayerComponent : public UFortControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* TeleportScreenMusicCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportScreenFadeoutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FadeOutData, meta=(AllowPrivateAccess=true))
    FSynchronizedTeleportFadeOutReplicationData FadeOutData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsServerWaitingForClientToCancelRespawn, meta=(AllowPrivateAccess=true))
    bool bIsServerWaitingForClientToCancelRespawn;
    
public:
    USynchronizedTeleportPlayerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRestartRespawn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsServerWaitingForClientToCancelRespawn();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FadeOutData();
    
    UFUNCTION(BlueprintCallable)
    void HandleTeleportScreenStatusChanged(AFortPlayerControllerAthena* PlayerController, bool bEnableLoadScreen, FText HUDReasonText);
    
};

