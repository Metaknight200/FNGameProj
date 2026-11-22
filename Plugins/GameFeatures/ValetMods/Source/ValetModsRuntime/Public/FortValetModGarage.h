#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ModInteractCategory.h"
#include "Templates/SubclassOf.h"
#include "FortValetModGarage.generated.h"

class AFortDagwoodVehicle;
class AFortModInteractPoint;

UCLASS(Blueprintable)
class VALETMODSRUNTIME_API AFortValetModGarage : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortDagwoodVehicle* CurrentVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortModInteractPoint> ModInteractPointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModInteractCategory> ModInteractCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortModInteractPoint*> SpawnedInteractPoints;
    
public:
    AFortValetModGarage(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnVehicleExit(AFortDagwoodVehicle* ExitingVehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnVehicleEnter(AFortDagwoodVehicle* NewVehicle);
    
};

