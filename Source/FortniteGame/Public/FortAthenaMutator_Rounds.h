#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "EAthenaGamePhase.h"
#include "EAthenaRoundsMutatorPhase.h"
#include "EMatchConditionMutatorTimingType.h"
#include "FortAthenaMutator.h"
#include "RoundsMutatorPhaseChangedDelegate.h"
#include "RoundsMutatorRoundAdvancedDelegate.h"
#include "FortAthenaMutator_Rounds.generated.h"

class AFortAthenaMutator_MatchConditionManager;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_Rounds : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoundsMutatorPhaseChanged OnPhaseChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRoundsMutatorRoundAdvanced OnRoundAdvanced;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HUDLoadingReasonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NextRoundFadeOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RoundEndTimeDilationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RoundEndDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TimeUntilRoundEndUICoversScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RoundEndUIDuration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RoundPhase, meta=(AllowPrivateAccess=true))
    EAthenaRoundsMutatorPhase RoundPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentRoundNum, meta=(AllowPrivateAccess=true))
    int32 CurrentRoundNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_MatchConditionManager* MatchConditionManager;
    
public:
    AFortAthenaMutator_Rounds(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RoundPhase(const EAthenaRoundsMutatorPhase OldRoundPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentRoundNum();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchConditionTimingSatisfied(const EMatchConditionMutatorTimingType TimingType);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRoundNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAthenaRoundsMutatorPhase GetPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastCompletedRoundNum() const;
    
};

