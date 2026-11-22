#pragma once
#include "CoreMinimal.h"
#include "GameStateComponent.h"
#include "FortDagwoodVehicleManager.generated.h"

class AActor;
class AFortAthenaVehicle;
class UFortVehicleItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VALETRUNTIME_API UFortDagwoodVehicleManager : public UGameStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasUpdatedPropReplacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumVehiclesSpawnedWithMod;
    
public:
    UFortDagwoodVehicleManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePropReplacement();
    
    UFUNCTION(BlueprintCallable)
    void OnVehicleSpawnsUpdated(UFortVehicleItemDefinition* VehicleItemDef, TArray<AActor*>& SpawnedVehicles, int32 NewVehicleCount);
    
    UFUNCTION(BlueprintCallable)
    void OnVehicleSpawned(AFortAthenaVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void CustomHandleActorStreamedInEditor(AActor* SourceActor);
    
};

