#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "EAthenaGamePhase.h"
#include "EMatchConditionMutatorTimingType.h"
#include "FortAthenaMutator.h"
#include "MatchConditionMutatorTeamData.h"
#include "FortAthenaMutator_MatchCondition.generated.h"

class AFortAthenaMutator_MatchConditionManager;

UCLASS(Abstract, Blueprintable)
class AFortAthenaMutator_MatchCondition : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchConditionMutatorTimingType TimingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_MatchConditionManager* MatchConditionManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bSatisfied, meta=(AllowPrivateAccess=true))
    uint8 bSatisfied: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bLocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bLockedPermanently: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FMatchConditionMutatorTeamData> TeamDataArray;
    
public:
    AFortAthenaMutator_MatchCondition(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bSatisfied();
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(const EAthenaGamePhase NewPhase, const EAthenaGamePhase PreviousHighestGamePhaseProcessed);
    
};

