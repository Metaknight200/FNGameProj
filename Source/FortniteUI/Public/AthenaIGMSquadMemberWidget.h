#pragma once
#include "CoreMinimal.h"
#include "EKeepPlayingTogetherVotingStatus.h"
#include "AthenaIGMPartyMemberWidget.h"
#include "AthenaIGMSquadMemberWidget.generated.h"

class AFortPlayerStateAthena;
class UFortLazyImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaIGMSquadMemberWidget : public UAthenaIGMPartyMemberWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Image_SquadMemberPortrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_SquadMemberName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* CachedSquadMember;
    
public:
    UAthenaIGMSquadMemberWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchmakingStarted(const bool bWasOptedIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeepPlayingTogetherVotingStatusChanged(const EKeepPlayingTogetherVotingStatus NewStatus, const bool bWasOptedIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePreserveSquadChanged(const bool bPreserveSquad);
    
};

