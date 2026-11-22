#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortQuestTreeItemWidget.generated.h"

class UFortQuestCategory;
class UFortQuestItem;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortQuestTreeItemWidget : public UCommonButtonLegacy, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> QuestOrCategory;
    
public:
    UFortQuestTreeItemWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupAsQuest(UFortQuestItem* Category);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupAsCategory(UFortQuestCategory* Category);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuestsUpdated();
    
    UFUNCTION(BlueprintCallable)
    void HandleQuestsUpdated();
    

    // Fix for true pure virtual functions not being implemented
};

