#pragma once
#include "CoreMinimal.h"
#include "EBattlePassCurrencyType.h"
#include "FortBattlePassTileBase.h"
#include "FortBattlePassTile.generated.h"

class UFortLazyImage;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UFortBattlePassTile : public UFortBattlePassTileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Image_RewardItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Currency;
    
public:
    UFortBattlePassTile();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnpreviewed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnhighlighted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTrack(const bool bIsFreeTrack, const bool bOwnsBattlePass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetCurrencyAndPrice(const EBattlePassCurrencyType Currency, const int32 Price);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreviewed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockedStateUpdated(const bool OwnsBattlePass, const bool ParentUnlocked, const bool HasRemainingPrerequisites, const bool bIsDelayed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockedProgressUpdated(const float Progress, const int32 CurrentlyOwnedRewards, const int32 NeededRewards);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHighlighted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAffordabilityChanged(const bool bHasEnougCurrency);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAffordable() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPrerequisites() const;
    
};

