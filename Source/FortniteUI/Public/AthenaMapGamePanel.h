#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "Engine/DataTable.h"
#include "AthenaMapGamePanel.generated.h"

class UAthenaChallengeNpcQuestListView;
class UAthenaChallengeNpcQuestTabList;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaMapGamePanel : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeNpcQuestTabList* TabList_QuestCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeNpcQuestListView* ListView_Quests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PlaceMarkerBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RemoveMarkerBinding;
    
public:
    UAthenaMapGamePanel();

};

