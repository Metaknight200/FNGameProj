#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "AthenaMapScreenContainerTabInfo.h"
#include "AthenaMapScreenContainer.generated.h"

class UCommonButtonLegacy;
class UCommonUserWidget;
class UCommonVisibilitySwitcher;
class UContentWidget;
class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMapScreenContainer : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HideWithMapTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaMapScreenContainerTabInfo> TabInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonUserWidget> SoftCreativeScoreboardClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NextTabInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PreviousTabInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* VisibilitySwitcher_Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_TabButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* MobileCloseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UContentWidget* Content_CreativeScoreboardContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAthenaMapScreenContainerTabInfo> ActiveTabInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CachedQuestTabIndex;
    
public:
    UAthenaMapScreenContainer();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowOrHideCreativeScoreboard(bool bShowCreativeScoreboard);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageReceived();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreativeScoreboardWidgetCreated(UCommonUserWidget* CreativeScoreboardWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnShowTabsSet(bool bShowTabs);
    
};

