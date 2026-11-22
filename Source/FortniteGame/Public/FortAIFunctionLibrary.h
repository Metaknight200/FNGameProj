#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "FortAIFunctionLibrary.generated.h"

class AAIController;
class AActor;
class ABuildingActor;
class AFortAIPawn;
class UAthenaAISpawner;
class UFortAthenaAIRuntimeParameters;
class UObject;

UCLASS(Blueprintable)
class UFortAIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortAIFunctionLibrary();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool TeleportAIPawn(AFortAIPawn* AIPawn, FVector DestLocation, FRotator DestRotation, bool bIgnoreCollision);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SetHearingRange(AActor* AIAgent, float Range);
    
    UFUNCTION(BlueprintCallable)
    static void RequestNavUpdateForBuilding(ABuildingActor* BuildingActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void MakeNoiseEventAtLocation(AActor* NoiseMaker, const float MaxRange, const FVector& NoiseLocation, const FName NoiseTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void MakeNoiseEvent(AActor* NoiseMaker, const float MaxRange, const FName NoiseTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsConcealedByPerceptionModifiers(const UObject* WorldContextObject, FVector ObserverLocation, FVector TargetLocation, float& OutConcealment);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static UFortAthenaAIRuntimeParameters* GetOrCreateAIRuntimeParameters(const AAIController* AIController, const TSubclassOf<UFortAthenaAIRuntimeParameters> ParametersClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAthenaAISpawner* GetAISpawner(UObject* WorldContextObject);
    
};

