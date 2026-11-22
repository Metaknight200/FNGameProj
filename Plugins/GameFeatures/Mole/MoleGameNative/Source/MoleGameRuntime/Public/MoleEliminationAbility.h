#pragma once
#include "CoreMinimal.h"
#include "FortGameplayAbility.h"
#include "GameplayTagContainer.h"
#include "MoleEliminationAbility.generated.h"

class AFortPlayerPawn;

UCLASS(Abstract, Blueprintable)
class UMoleEliminationAbility : public UFortGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CooldownTagsToListenTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CombinedCooldownTags;
    
public:
    UMoleEliminationAbility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ValidatePotentialEliminationTarget(AFortPlayerPawn* PotentialTargetPawn) const;
    
};

