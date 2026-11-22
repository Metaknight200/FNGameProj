#pragma once
#include "CoreMinimal.h"
#include "FortBattlePassBulkBuyPageBase.h"
#include "FortBattlePassBulkBuyPageS17.generated.h"

class UAthenaSeasonItemData_BattleStar;
class UAthenaSeasonItemDefinition;
class UCommonButtonBase;
class UCommonVisibilitySwitcher;
class UDynamicEntryBox;
class UFortBattlePassTile;
class UFortHoldableButton;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBattlePassBulkBuyPageS17 : public UFortBattlePassBulkBuyPageBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Addition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Subtraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* DynamicEntryBox_TilesEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* Switcher_BottomButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortHoldableButton* Button_BuyLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortHoldableButton* Button_ClaimReward;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaSeasonItemDefinition* SeasonItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortBattlePassTile* FocusedReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_Pages;
    
public:
    UFortBattlePassBulkBuyPageS17();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRewardCountChanged(const int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPageRangeChanged(const int32 FromPage, const int32 ToPage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCostChanged(const int32 Cost);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleUserScrolled(float ScrollAmount);
    
};

