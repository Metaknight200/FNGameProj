#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EndOfMatchQuestEntryWidget.generated.h"

class UFortNotificationEntry_Quest;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UEndOfMatchQuestEntryWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndOfMatchQuestMoveDownFinished);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndOfMatchQuestCreateFinished);
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndOfMatchQuestCreateFinished OnEndOfMatchQuestIntroFinishedDelegate;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndOfMatchQuestMoveDownFinished OnEndOfMatchQuestMoveDownFinishedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveDownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortNotificationEntry_Quest* QuestNotification;
    
public:
    UEndOfMatchQuestEntryWidget();

private:
    UFUNCTION(BlueprintCallable)
    void HandleNotificationDisplayed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleMoveDownFinished();
    
};

