#pragma once
#include "CoreMinimal.h"
#include "UrgentQuestData.h"
#include "FortHUDElementWidget.h"
#include "FortPrioritizedWidget.h"
#include "FortPrioritizedWidgetData.h"
#include "AthenaSpecialEventStartedOverlay.generated.h"

class AFortPlayerStateAthena;
class UFortQuestObjectiveInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpecialEventStartedOverlay : public UFortHUDElementWidget, public IFortPrioritizedWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* AttachedPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPrioritizedWidgetData PrioritizedWidgetData;
    
public:
    UAthenaSpecialEventStartedOverlay();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowUrgentQuestMessage(const FUrgentQuestData& UrgentQuestData, const float EventTimeRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrioitizedFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrioitizedActivated();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleShowUrgentQuestMessage(const FUrgentQuestData& UrgentQuestData, const float EventTimeRemaining);
    
    UFUNCTION(BlueprintCallable)
    void HandleDisplayDynamicQuestUpdate(const UFortQuestObjectiveInfo* QuestObjective, bool DisplayStatusUpdate, bool DisplayAnnouncementUpdate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOutroDelay() const;
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void WidgetIsFinished() override PURE_VIRTUAL(WidgetIsFinished,);
    
    UFUNCTION(BlueprintCallable)
    void SetHasActiveContent(bool bNewActive) override PURE_VIRTUAL(SetHasActiveContent,);
    
    UFUNCTION(BlueprintCallable)
    void RequestActivation() override PURE_VIRTUAL(RequestActivation,);
    
};

