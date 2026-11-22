#pragma once
#include "CoreMinimal.h"
#include "BattlePassLandingPageBase.h"
#include "BattlePassLandingPageS17.generated.h"

class UAthenaSeasonItemData_BattleStar;
class UBattlePassLandingPageButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBattlePassLandingPageS17 : public UBattlePassLandingPageBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassLandingPageButton* Button_Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassLandingPageButton* Button_CharacterCustomizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassLandingPageButton* Button_BonusRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassLandingPageButton* Button_Quests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassLandingPageButton* Button_BuyBattlePass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassLandingPageButton* Button_JoinSubscription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassLandingPageButton* Button_BuyResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassLandingPageButton* Button_GiftBattlePass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar;
    
public:
    UBattlePassLandingPageS17();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattlePassSubscriptionAllowed(const bool bSubscriptionAllowed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattlePassOwned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattlePassGiftingAllowed(const bool bGiftingAllowed);
    
};

