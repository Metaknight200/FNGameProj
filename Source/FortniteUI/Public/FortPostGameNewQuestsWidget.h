#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortPostGameNewQuestsWidget.generated.h"

class UDynamicEntryBox;
class UFortQuestObjectiveInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPostGameNewQuestsWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayNewQuestsIntroFinished);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayNewQuestsEntryBoxOutroFinished);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayNewQuestsEntryBoxIntroFinished);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewQuestsEntryBoxDisplayTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_NewQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortQuestObjectiveInfo*> UpdatedQuestObjectiveInfoDisplaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortQuestObjectiveInfo*> UpdatedQuestObjectiveInfoToDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayNewQuestsIntroFinished OnPlayNewQuestsIntroFinishedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayNewQuestsEntryBoxIntroFinished OnPlayNewQuestsEntryBoxIntroFinishedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayNewQuestsEntryBoxOutroFinished OnPlayNewQuestsEntryBoxOutroFinishedDelegate;
    
public:
    UFortPostGameNewQuestsWidget();

private:
    UFUNCTION(BlueprintCallable)
    void PlayNextNewQuestsBatch();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayNewQuestUpdates();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOutro();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayNewQuestsEntryBoxOutro();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayNewQuestsEntryBoxIntro();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayIntro();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayNewQuestUpdatesDelayTimerExpired();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayNewQuestsIntroAnimFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayNewQuestsEntryBoxTimerFinished();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePlayNewQuestsEntryBoxOutroAnimFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayNewQuestsEntryBoxIntroFinished();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePlayNewQuestsEntryBoxIntroAnimFinished();
    
};

