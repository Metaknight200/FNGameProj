#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "FortAISystem.h"
#include "AthenaAISystem.generated.h"

class AActor;
class AAthenaAIController;
class UAthenaAIDropper;
class UAthenaAIPerceptionManager;
class UAthenaAIPopulationTracker;
class UAthenaAIServiceManager;
class UAthenaAISpawner;
class UAthenaPathFollowingComponent;

UCLASS(Blueprintable)
class UAthenaAISystem : public UFortAISystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaAIPerceptionManager* PerceptionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaAIDropper* AIDropper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaAISpawner* AISpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaAIServiceManager* AIServiceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaAIPopulationTracker* AIPopulationTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAthenaAIController*> AIControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaPathFollowingComponent*> PathFollowingComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RegisteredAISpawners;
    
public:
    UAthenaAISystem();

    UFUNCTION(BlueprintCallable)
    void AIProfiling_OnSafeZoneUpdated();
    
    UFUNCTION(BlueprintCallable)
    void AIProfiling_OnGamePhaseChanged(EAthenaGamePhase GamePhase);
    
};

