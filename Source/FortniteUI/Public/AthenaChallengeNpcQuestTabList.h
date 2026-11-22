#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "RewardCategoryTabData.h"
#include "Templates/SubclassOf.h"
#include "AthenaChallengeNpcQuestTabList.generated.h"

class UAthenaMapChallengeCategoryTabButton;
class UCommonButtonBase;
class UCommonTextBlock;
class UFortQuestItem;
class UFortQuestItemDefinition;
class UFortQuestObjectiveInfo;
class UFortTabListWidgetBase;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeNpcQuestTabList : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTabListWidgetBase* TabList_ChallengeCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_TabName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaMapChallengeCategoryTabButton> TabButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRewardCategoryTabData> RewardTabsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* DefaultTabDisplayAsset;
    
public:
    UAthenaChallengeNpcQuestTabList();

private:
    UFUNCTION(BlueprintCallable)
    void HandleTransientQuestStarted(const UFortQuestItem* QuestItem, const UFortQuestItemDefinition* PreceedingQuestDef);
    
    UFUNCTION(BlueprintCallable)
    void HandleTransientQuestRemoved(const UFortQuestItem* QuestItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleTabSelected(FName TabNameID);
    
    UFUNCTION(BlueprintCallable)
    void HandleTabButtonCreated(FName TabId, UCommonButtonBase* TabButton);
    
    UFUNCTION(BlueprintCallable)
    void HandleNewContextualObjectives(const TArray<UFortQuestItem*>& ContextualQuests);
    
    UFUNCTION(BlueprintCallable)
    void HandleDisplayDynamicQuestUpdate(const UFortQuestObjectiveInfo* QuestObjective, bool DisplayStatusUpdate, bool DisplayAnnouncementUpdate);
    
};

