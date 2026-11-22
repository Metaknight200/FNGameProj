#pragma once
#include "CoreMinimal.h"
#include "BattlePassRewardPageBase.h"
#include "ECommonInputType.h"
#include "ERewardPageType.h"
#include "Templates/SubclassOf.h"
#include "BattlePassRewardPageS17.generated.h"

class UAthenaSeasonItemData_BattleStar;
class UBattlePassBulkBuyInputData;
class UFortBattlePassRewardGrid;
class UFortBattlePassTile;
class UFortBattlePassTutorialTooltipS17;
class UFortPageNavigator;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBattlePassRewardPageS17 : public UBattlePassRewardPageBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortBattlePassRewardGrid> RewardsGridClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPageNavigator* PageNavigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortBattlePassTile* FocusedReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortBattlePassRewardGrid*> GridPages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERewardPageType RewardPageType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HoldTileTooltip_ClaimedRewardsToHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HoldTileTooltip_RequiredBattleStarsToShow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBattlePassTutorialTooltipS17* TutorialTooltip_SecondPageUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBattlePassTutorialTooltipS17* TutorialTooltip_ClaimAllRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBattlePassTutorialTooltipS17* TutorialTooltip_HoldTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBattlePassBulkBuyInputData* BulkBuyInputData;
    
public:
    UBattlePassRewardPageS17();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPageChanged(const int32 PageNumber);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputMethodChanged(const ECommonInputType InputType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitForPageType(const ERewardPageType InRewardPageType);
    
};

