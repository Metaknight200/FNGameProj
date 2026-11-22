#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FortAthenaMutator.h"
#include "ScalableFloat.h"
#include "KnockbackMutatorData.h"
#include "KnockbackMutatorDataArray.h"
#include "OnPlayerKnockbackDataChangedDelegate.h"
#include "FortAthenaMutator_Knockback.generated.h"

class AFortPawn;
class AFortPlayerPawn;

UCLASS(Blueprintable)
class KNOCKBACKRUNTIME_API AFortAthenaMutator_Knockback : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStorePlayerKnockbackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicatePlayerKnockbackData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerKnockbackDataChanged OnPlayerKnockbackDataChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FKnockbackMutatorDataArray AllPlayersKnockbackData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bDisplayKnockbackDamageNumbersAsPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ConvertToKnockbackDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PercentDamageLowMaxThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PercentDamageMediumMaxThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockbackMultiplierInitialValue;
    
public:
    AFortAthenaMutator_Knockback(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetPlayersShouldBreakThroughStructures(const bool bActive, AFortPlayerPawn* PlayerPawn);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleBlockedCharacterMovement(FHitResult& InOutImpact, AFortPawn* FortPawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentDamageMediumMaxThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentDamageLowMaxThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetKnockbackMultiplierInitialValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKnockbackMutatorData> GetAllPlayersKnockbackData();
    
};

