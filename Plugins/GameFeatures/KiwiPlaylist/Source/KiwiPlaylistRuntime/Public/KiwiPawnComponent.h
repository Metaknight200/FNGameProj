#pragma once
#include "CoreMinimal.h"
#include "FortPawnComponent.h"
#include "Templates/SubclassOf.h"
#include "KiwiPawnComponent.generated.h"

class AFortPlayerPawn;
class UActorComponent;
class UNiagaraSystem;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKiwiPawnComponent : public UFortPawnComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawSquadMateOutlineThroughWalls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* PlayerMoveInGoopNiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* PlayerSplashInGoopNiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UActorComponent>> DestroyPawnComponentClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DestroyPawnComponentNames;
    
public:
    UKiwiPawnComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void HandlePawnExitWaterBody(AFortPlayerPawn* PlayerPawn, const bool bPawnIsOutsideOfAllWaterBodies);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void HandlePawnEnterWaterBody(AFortPlayerPawn* PlayerPawn);
    
};

