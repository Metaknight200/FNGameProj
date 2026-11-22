#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAIComponent_Telemetry.h"
#include "ELabradorDespawnReason.h"
#include "FortLabradorComponent_Telemetry.generated.h"

class AActor;
class AController;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortLabradorComponent_Telemetry : public UFortAIComponent_Telemetry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasAwake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString InstigatorAwakeNetIDString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ELabradorDespawnReason DespawnReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DamageReceivedFromPlayers;
    
public:
    UFortLabradorComponent_Telemetry(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnWakeUp(AActor* GoalActor);
    
    UFUNCTION(BlueprintCallable)
    void OnTeleport();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
};

