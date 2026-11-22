#pragma once
#include "CoreMinimal.h"
#include "FortItemPreviewScreen.h"
#include "BattlePassViewAllRewardsScreen.generated.h"

class UBattlePassViewRewardData;
class UCommonButtonLegacy;
class UCommonTextBlock;
class UFortItem;
class UTileView;

UCLASS(Blueprintable, EditInlineNew)
class UBattlePassViewAllRewardsScreen : public UFortItemPreviewScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItem* LastViewedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBattlePassViewRewardData*> AllRewardItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SortLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ChapterLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SeasonLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_CycleSort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTileView* TileView_Rewards;
    
public:
    UBattlePassViewAllRewardsScreen();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemViewed(const UBattlePassViewRewardData* ItemDisplayed);
    
};

