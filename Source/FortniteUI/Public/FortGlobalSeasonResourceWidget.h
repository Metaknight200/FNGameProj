#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortGlobalSeasonResourceWidget.generated.h"

class UBorder;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortGlobalSeasonResourceWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_BattleStarsAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_StylePointsAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Border_StylePointsRewardsTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Border_BattleStarsRewardsTag;
    
public:
    UFortGlobalSeasonResourceWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void ShowResourcesInfoModal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStylePointsRewardsSet(const int32 Rewards);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleStarRewardsSet(const int32 Rewards);
    
};

