#pragma once
#include "CoreMinimal.h"
#include "EFortRarity.h"
#include "AthenaChallengeListEntryBase.h"
#include "EAthenaChallengeTimerState.h"
#include "AthenaChallengeListEntry_NpcQuest.generated.h"

class UAthenaChallengeDateTimeTextBlock;
class UAthenaChallengeRewards;
class UCommonTextBlock;
class UFortLazyImage;
class UFortQuestObjectiveInfo;
class UObject;
class URichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeListEntry_NpcQuest : public UAthenaChallengeListEntryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichText_ChallengeDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichText_ObjectivesCompletedSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichText_ObjectivesCompletedUnselected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* LazyImage_SourceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichText_SourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichText_FlavorText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeDateTimeTextBlock* DateTimeText_TimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeRewards* UserWidget_Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_QuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> DefaultPortraitDisplayAsset;
    
public:
    UAthenaChallengeListEntry_NpcQuest();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetState(bool bIsCompleted, bool bIsLocked, bool bIsPartyAssisted, bool bIsGroupChallenge, bool bShowQuestDetailsWhenLocked);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleQuestUpdate(const UFortQuestObjectiveInfo* QuestObjective, bool DisplayStatusUpdate, bool DisplayAnnouncementUpdate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTimerSet(EAthenaChallengeTimerState TimerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRaritySet(EFortRarity Rarity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnChallengeSeenChanged(bool bChallengeSeen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnChallengeInfoSet();
    
};

