#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "UObject/Object.h"
#include "EQSActorSpawnerData.h"
#include "FortAthenaMutator_EQSActorProviderInterface.h"
#include "FortAthenaMutator_EQSProviderInterface.h"
#include "EQSActorSpawner.generated.h"

class AActor;
class AFortAthenaMutator_EQSActorSpawner;
class UEQSActorSpawnerHelperDestroyActorsInArea;
class UEnvQueryInstanceBlueprintWrapper;

UCLASS(Blueprintable)
class UEQSActorSpawner : public UObject, public IFortAthenaMutator_EQSProviderInterface, public IFortAthenaMutator_EQSActorProviderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_EQSActorSpawner* OwningActorSpawnerMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEQSActorSpawnerHelperDestroyActorsInArea*> SpawnerHelperDestroyActorsInAreaList;
    
public:
    UEQSActorSpawner();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFindActorSpawnLocationQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEQSActorSpawnerData GetSpawnerData();
    

    // Fix for true pure virtual functions not being implemented
};

