#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "Engine/DataTable.h"
#include "AthenaCareerScreen.generated.h"

class UAthenaFeatTimelineListView;
class UAthenaLeaderboardScreenBase;
class UAthenaReplayBrowserScreenBase;
class UBacchusCloseButton;
class UCommonButtonLegacy;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UAthenaCareerScreen : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAthenaLeaderboardScreenBase> LeaderboardsScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAthenaReplayBrowserScreenBase> ReplayBrowserScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackToSocialTabInputActionRowHandle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_AccountLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Leaderboards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Replays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaFeatTimelineListView* ListView_FeatTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ChapterContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBacchusCloseButton* Mobile_CloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_MobileTabLabel;
    
public:
    UAthenaCareerScreen();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowFeats(bool bHasCompletedFeats);
    
};

