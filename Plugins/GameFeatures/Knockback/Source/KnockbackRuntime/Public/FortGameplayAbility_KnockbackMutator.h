#pragma once
#include "CoreMinimal.h"
#include "FortGameplayAbility.h"
#include "KnockbackMutatorData.h"
#include "Templates/SubclassOf.h"
#include "FortGameplayAbility_KnockbackMutator.generated.h"

class AFortAthenaMutator_Knockback;

UCLASS(Blueprintable)
class KNOCKBACKRUNTIME_API UFortGameplayAbility_KnockbackMutator : public UFortGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Knockback* CachedMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortAthenaMutator_Knockback> MutatorClassToGet;
    
public:
    UFortGameplayAbility_KnockbackMutator();

protected:
    UFUNCTION(BlueprintCallable)
    void SaveKnockbackData(const FKnockbackMutatorData& InKnockbackData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortAthenaMutator_Knockback* GetCachedMutator();
    
};

