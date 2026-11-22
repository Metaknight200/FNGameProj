#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "FortAthenaMutator_OverrideValetVehicleParameters.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_OverrideValetVehicleParameters : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinInitialVehicleFuelPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxInitialVehicleFuelPercent;
    
public:
    AFortAthenaMutator_OverrideValetVehicleParameters(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContainerTags);
    
};

