#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAthenaLivingWorldEncounterInstance.generated.h"

class AActor;
class IFortAthenaLivingWorldPointProviderInterface;
class UFortAthenaLivingWorldPointProviderInterface;
class UFortAthenaLivingWorldEncounter;

UCLASS(Blueprintable)
class UFortAthenaLivingWorldEncounterInstance : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActorSpawned, AActor*, SpawnedActor);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorSpawned OnActorSpawned;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>> OriginalPointProviders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IFortAthenaLivingWorldPointProviderInterface>> RegisteredPointProviders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAthenaLivingWorldEncounter> EncounterDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentStageIndex;
    
public:
    UFortAthenaLivingWorldEncounterInstance();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AdvanceEncounterStage();
    
};

