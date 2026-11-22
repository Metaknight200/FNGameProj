#pragma once
#include "CoreMinimal.h"
#include "FortGameStateComponent.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "FortGameStateComponent_ValetMods.generated.h"

class AFortValetModBase;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, Config=Engine, meta=(BlueprintSpawnableComponent))
class UFortGameStateComponent_ValetMods : public UFortGameStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AFortValetModBase>> AllMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TiresTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxVehiclesCanSpawnWithMod;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PercentChanceSpawnWithMod;
    
public:
    UFortGameStateComponent_ValetMods(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryInitValetMods();
    
};

