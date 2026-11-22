#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Party/PartyMember.h"
#include "EFortPartyMemberLocation.h"
#include "EPartyMemberSidekickStatus.h"
#include "EPartyMemberVoiceChatStatus.h"
#include "PartyMemberAssistedChallengeInfo.h"
#include "PartyMemberAthenaBannerInfo.h"
#include "PartyMemberBattlePassInfo.h"
#include "PartyMemberCampaignHero.h"
#include "PartyMemberCampaignInfo.h"
#include "PartyMemberCosmeticLoadout.h"
#include "PartyMemberFrontEndMapMarker.h"
#include "PartyMemberFrontendEmote.h"
#include "PartyMemberLobbyState.h"
#include "PartyMemberSquadAssignmentRequest.h"
#include "PartyMemberVariantCache.h"
#include "FortPartyMemberRepData.generated.h"

class UFortFeatItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortPartyMemberRepData : public FPartyMemberRepData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPartyMemberLocation Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberCampaignHero CampaignHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberCampaignInfo CampaignInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberFrontendEmote FrontendEmote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumAthenaPlayersLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpectateAPartyMemberAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime UtcTimeStartedMatchAthena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberLobbyState LobbyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberAssistedChallengeInfo AssistedChallengeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortFeatItemDefinition* FeatDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberSquadAssignmentRequest MemberSquadAssignmentRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartyMemberVoiceChatStatus VoiceChatStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartyMemberSidekickStatus SidekickStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberFrontEndMapMarker FrontEndMapMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberCosmeticLoadout AthenaCosmeticLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberVariantCache AthenaCosmeticLoadoutVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ArbitraryCustomDataStore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberAthenaBannerInfo AthenaBannerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberBattlePassInfo BattlePassInfo;
    
public:
    FFortPartyMemberRepData();
};

