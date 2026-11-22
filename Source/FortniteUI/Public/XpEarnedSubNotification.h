#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortEarnedSubRewardType.h"
#include "XpEarnedSubNotification.generated.h"

class UFortQuestItem;

UCLASS(Blueprintable, EditInlineNew)
class UXpEarnedSubNotification : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortQuestItem* QuestItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasDisplayedXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasDisplayedBars;
    
public:
    UXpEarnedSubNotification();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartNotificationIntro();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRewardValue(int32 RewardValue, EFortEarnedSubRewardType RewardType);
    
public:
    UFUNCTION(BlueprintCallable)
    void PushXpNotification();
    
    UFUNCTION(BlueprintCallable)
    void FinishedDisplayAnim();
    
};

