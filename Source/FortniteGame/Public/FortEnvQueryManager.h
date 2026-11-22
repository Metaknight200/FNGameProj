#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "EnvQueryManagerConfig.h"
#include "EAthenaGamePhase.h"
#include "FortEnvQueryManager.generated.h"

UCLASS(Blueprintable, NonTransient, Config=Game)
class UFortEnvQueryManager : public UEnvQueryManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FEnvQueryManagerConfig> EnvManagerConfigPerGamePhase;
    
public:
    UFortEnvQueryManager();

protected:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
    
};

