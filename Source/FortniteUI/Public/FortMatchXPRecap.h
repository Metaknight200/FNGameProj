#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortMatchXPRecap.generated.h"

class UAthenaIGMSquadDisplayWidget;
class UCommonTextBlock;
class UCommonVisibilitySwitcher;
class UEndOfMatchQuestUpdateWidget;
class UFortMatchXPTotalEntry;
class UFortPostGameMenuEntryOverlay;
class UFortPostGameMenuListView;
class USizeBox;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UFortMatchXPRecap : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* Switcher_DisplayTooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_ReadyUpTooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaIGMSquadDisplayWidget* SquadDisplayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPostGameMenuEntryOverlay* MenuEntry_DisabledStayWithSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPostGameMenuListView* ListView_KeepPlayingTogetherMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPostGameMenuListView* ListView_PostGameMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMatchXPTotalEntry* MatchXP_MedalEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMatchXPTotalEntry* MatchXP_SurvivalBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMatchXPTotalEntry* MatchXP_CombatBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMatchXPTotalEntry* MatchXP_MatchXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMatchXPTotalEntry* MatchXP_TotalEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMatchXPTotalEntry* MatchCash_TotalEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndOfMatchQuestUpdateWidget* Widget_QuestRecap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Leto_IGMMWrapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Overlay_ChallengeSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBoxNavigationOptions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> KeepPlayingTogetherWhitelist;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> KeepPlayingTogetherBaselineWhitelist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_MemberOptedOut;
    
public:
    UFortMatchXPRecap();

    UFUNCTION(BlueprintCallable)
    void FocusOnDesiredTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimateXPTotals();
    
};

