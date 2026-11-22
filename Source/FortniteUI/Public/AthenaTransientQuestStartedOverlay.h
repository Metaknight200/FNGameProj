#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "FortPrioritizedWidget.h"
#include "FortPrioritizedWidgetData.h"
#include "AthenaTransientQuestStartedOverlay.generated.h"

class UCommonButtonLegacy;
class UFortQuestItem;
class UFortQuestItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaTransientQuestStartedOverlay : public UFortHUDElementWidget, public IFortPrioritizedWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_MobileClickCatcher;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPrioritizedWidgetData PrioritizedWidgetData;
    
public:
    UAthenaTransientQuestStartedOverlay();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransientQuestStarted(const UFortQuestItem* QuestItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrioitizedFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrioitizedActivated();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTransientQuestStarted(const UFortQuestItem* QuestItem, const UFortQuestItemDefinition* PreceedingQuestDef);
    
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

