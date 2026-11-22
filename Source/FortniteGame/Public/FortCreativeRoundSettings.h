#pragma once
#include "CoreMinimal.h"
#include "BuildingProp.h"
#include "EFortResourceType.h"
#include "FortCreativeRoundSettings.generated.h"

class AFortPlayerController;
class UFortWorldItemDefinition;

UCLASS(Blueprintable)
class AFortCreativeRoundSettings : public ABuildingProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RoundIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeepItemsBetweenRounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageOfResourcesKeptBetweenRounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReloadAndRestockWeaponsEachRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRelevantThisRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bActiveDuringMinigame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinningTeamOnMessageReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastTeamStandingWins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UFortWorldItemDefinition*, int32> RestockAmmoAmounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultRestockAmmoAmount;
    
    AFortCreativeRoundSettings(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetResourceGivenToWinnersPerRound(const TEnumAsByte<EFortResourceType::Type> InResourceType, const int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void SetResourceGivenPerRound(const TEnumAsByte<EFortResourceType::Type> InResourceType, const int32 Amount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRoundIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResourceGivenToWinnersPerRound(const TEnumAsByte<EFortResourceType::Type> InResourceType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResourceGivenPerRound(const TEnumAsByte<EFortResourceType::Type> InResourceType) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndRound(AFortPlayerController* InstigatorPC);
    
    UFUNCTION(BlueprintCallable)
    void ClearResourcesGivenToWinnersPerRound();
    
    UFUNCTION(BlueprintCallable)
    void ClearResourcesGivenPerRound();
    
};

