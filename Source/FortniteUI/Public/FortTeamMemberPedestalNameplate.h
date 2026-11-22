#pragma once
#include "CoreMinimal.h"
#include "EFortFriendRequestStatus.h"
#include "EGameReadiness.h"
#include "ESubGame.h"
#include "FortBasicTeamMemberEntry.h"
#include "FortTeamMemberPedestalNameplate.generated.h"

class UCommonButtonLegacy;
class UCommonTextBlock;
class UCommonWidgetSwitcherLegacy;
class UFortPlayerPowerRating;
class UImage;
class UMatchmakingInputIndicatorBase;
class USizeBox;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UFortTeamMemberPedestalNameplate : public UFortBasicTeamMemberEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ReadyStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMatchmakingInputIndicatorBase* InputIndicator_ActiveInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* PowerRatingWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerPowerRating* PowerRating_CampaignPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerPowerRating* Moonbeam_PowerRating_CampaignPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerPowerRating* Phoenix_PowerRating_CampaignPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_HotfixControlled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PlayerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_HeroIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_AddFriend;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeamMemberPedestalNameplateAddFriendButtonEnabled;
    
public:
    UFortTeamMemberPedestalNameplate();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadyStatusChanged(EGameReadiness GameReadiness);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayReadyAudio(bool bIsReadyForMatchmaking);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPedestalSelectedChanged(bool bIsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFriendStatusUpdated(const EFortFriendRequestStatus FriendRequestStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurrentSubGameChanged(ESubGame NewSubGame);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleShouldShowPhoenixDisplayChanged(bool bShouldShowPhoenixDisplay);
    
};

