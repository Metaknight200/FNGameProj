#pragma once
#include "CoreMinimal.h"
#include "FortShowdownDetailView.h"
#include "FortShowdownDivisionEventView.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortShowdownDivisionEventView : public UFortShowdownDetailView {
    GENERATED_BODY()
public:
    UFortShowdownDivisionEventView();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDivisionEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalNumberOfDivisions() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalDivisionPoints() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredAmountToAdvanceDivision() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumericalDisplayAmountForNextDivision() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLeagueDisplayNameByDivision(int32 InDivision) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLeagueDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDivisionRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountEarnedWithinDivision() const;
    
};

