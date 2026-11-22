#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "OnEnvironmentQueryFinishedDelegate.h"
#include "FortAISpawnerUtilityComponent.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAISpawnerUtilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* EnvironmentQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnvNamedValue> QueryParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QueryRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QueryMinDistance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnvironmentQueryFinished OnEnvironmentQueryFinishedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> FreeSpawnSlots;
    
public:
    UFortAISpawnerUtilityComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartEnvironmentQuery();
    
    UFUNCTION(BlueprintCallable)
    void SetQueryRadius(float Radius);
    
    UFUNCTION(BlueprintCallable)
    void SetEQSQuery(TSoftObjectPtr<UEnvQuery> SelectedEQSQuery);
    
    UFUNCTION(BlueprintCallable)
    static void HandlePawnSpawned();
    
    UFUNCTION(BlueprintCallable)
    static void HandlePawnDied();
    
    UFUNCTION(BlueprintCallable)
    static void ClearSpawnCount();
    
    UFUNCTION(BlueprintCallable)
    static bool CanSpawn();
    
};

