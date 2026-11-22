#pragma once
#include "CoreMinimal.h"
#include "ERewardPageType.h"
#include "Blueprint/UserWidget.h"
#include "FortBattlePassRewardGridHeader.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPASSBASE_API UFortBattlePassRewardGridHeader : public UUserWidget {
    GENERATED_BODY()
public:
    UFortBattlePassRewardGridHeader();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPageType(const ERewardPageType PageType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPageUnlocked(const int32 PurchasedRewards, const int32 TotalRewards);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPageNumberSet(const int32 InPageNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPageLocked(const int32 RequiredLevel, const int32 RequiredRewards);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattlePassLevelSet(const int32 BattlePassLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPageNumber() const;
    
};

