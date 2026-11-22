#pragma once
#include "CoreMinimal.h"
#include "FortAIComponent_Telemetry.h"
#include "FortHitchhikerComponent_Telemetry.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortHitchhikerComponent_Telemetry : public UFortAIComponent_Telemetry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasInfectedAtSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 InfectionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DeinfectionCount;
    
public:
    UFortHitchhikerComponent_Telemetry(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWasInfectedAtSpawn(bool bInfectedAtSpawn);
    
    UFUNCTION(BlueprintCallable)
    void OnInfected();
    
    UFUNCTION(BlueprintCallable)
    void OnDeinfected();
    
};

