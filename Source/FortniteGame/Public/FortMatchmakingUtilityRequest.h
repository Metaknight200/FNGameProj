#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingUtilityFlows.h"
#include "PlaylistFrontEndData.h"
#include "FortMatchmakingUtilityRequest.generated.h"

USTRUCT(BlueprintType)
struct FFortMatchmakingUtilityRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlaylistFrontEndData DesiredPlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlaylistRegionForTournament;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchmakingUtilityFlows FlowOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LinkCodeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowServerBrowser;
    
    FORTNITEGAME_API FFortMatchmakingUtilityRequest();
};

