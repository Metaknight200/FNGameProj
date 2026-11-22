#pragma once
#include "CoreMinimal.h"
#include "SocialUserTreeView.h"
#include "Templates/SubclassOf.h"
#include "FortSocialUserTreeView.generated.h"

class UCommonUserWidget;
class UFortJoinablePartyListEntry;
class UFortLeavePartyListEntry;
class UFortMissedInvitesListEntry;
class UFortPartyMemberListEntry;
class UFortSocialListUserEntryBase;
class UFortTeamMemberListEntry;
class UFortUserSearchResultListEntry;
class UFortVoiceChatMemberListEntry;
class USocialListInteractableEntryBase;

UCLASS(Blueprintable)
class UFortSocialUserTreeView : public USocialUserTreeView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPartyMemberListEntry> PartyMemberEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortTeamMemberListEntry> TeamMemberEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortVoiceChatMemberListEntry> VoiceChatMemberEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortJoinablePartyListEntry> JoinablePartyEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMissedInvitesListEntry> MissedInviteEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortUserSearchResultListEntry> UserSearchResultEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortLeavePartyListEntry> LeavePartyEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortSocialListUserEntryBase> SuggestedFriendEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortSocialListUserEntryBase> JoinRequestEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USocialListInteractableEntryBase> SidekickMemberEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USocialListInteractableEntryBase> DisableSidekickEntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonUserWidget> VoiceChannelHeaderEntryWidgetClass;
    
public:
    UFortSocialUserTreeView();

};

