#pragma once
#include "CoreMinimal.h"
#include "EFortRarity.h"
#include "FortChallengeSetStyle.h"
#include "EAthenaChallengeTimerState.h"
#include "FortNotificationEntry.h"
#include "FortNotificationEntry_Quest.generated.h"

class UAthenaChallengeDateTimeTextBlock;
class UBorder;
class UCommonTextBlock;
class UFortLazyImage;
class UFortQuestItem;
class UObject;
class URichTextBlock;
class UXpEarnedSubNotification;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortNotificationEntry_Quest : public UFortNotificationEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoalCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsTurnInNotification;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* LazyImage_SourceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeDateTimeTextBlock* DateTimeText_TimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichText_ObjectivesCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_FlavorText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Border_AssistedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UXpEarnedSubNotification* XpSubNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortQuestItem> WeakQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> DefaultPortraitDisplayAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectiveName;
    
public:
    UFortNotificationEntry_Quest();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateQuestVisuals(const FFortChallengeSetStyle& DisplayStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDefaultObjectiveVisuals();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowTurnInNotification();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAssistData(bool bWasAssisted, const FString& OtherPlayersName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayRushedNotificationIntro(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnableCompleteFlavorText(bool IsEnabled);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTimerSet(EAthenaChallengeTimerState TimerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRaritySet(EFortRarity Rarity);
    
};

