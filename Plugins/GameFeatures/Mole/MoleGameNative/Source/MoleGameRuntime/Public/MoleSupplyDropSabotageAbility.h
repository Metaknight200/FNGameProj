#pragma once
#include "CoreMinimal.h"
#include "EInteractionBeingAttempted.h"
#include "ScalableFloat.h"
#include "MoleActiveTaskStateHandle.h"
#include "MoleSabotageAbility.h"
#include "MoleSupplyDropSabotageAbility.generated.h"

class AFortPawn;
class UMoleTaskLinkComponent;

UCLASS(Blueprintable)
class UMoleSupplyDropSabotageAbility : public UMoleSabotageAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumberOfPointsToFix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMoleActiveTaskStateHandle> FixTaskHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InteractionInfoRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMoleTaskLinkComponent*> ChosenFixPoints;
    
public:
    UMoleSupplyDropSabotageAbility();

    UFUNCTION(BlueprintCallable)
    void HandleFixPointInteracted(UMoleTaskLinkComponent* TaskLinkComponent, const AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionType);
    
};

