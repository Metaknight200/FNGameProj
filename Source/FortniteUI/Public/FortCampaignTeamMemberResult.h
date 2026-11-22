#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortCampaignTeamMemberEntry.h"
#include "FortCampaignTeamMemberResult.generated.h"

class UCommonButtonLegacy;
class UCommonTextBlock;
class UCommonWidgetSwitcherLegacy;
class UFortPlayerBanner;
class UFortPlayerPowerRating;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCampaignTeamMemberResult : public UFortCampaignTeamMemberEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Stats;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerBanner* Banner_MemberBanner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* PowerRatingWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerPowerRating* PowerRating_MemberRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerPowerRating* Moonbeam_PowerRating_MemberRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_PlatformIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_MemberName;
    
public:
    UFortCampaignTeamMemberResult();

    UFUNCTION(BlueprintCallable)
    void UpdateMemberWithUniqueNetID(const FUniqueNetIdRepl& MemberId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Focus();
    
};

