#pragma once
#include "CoreMinimal.h"
#include "MolePlayerItem.h"
#include "MoleVotingPlayerInfo.h"
#include "MoleVotingPlayerInfoItem.generated.h"

UCLASS(Blueprintable)
class UMoleVotingPlayerInfoItem : public UMolePlayerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoleVotingPlayerInfo PlayerInfo;
    
    UMoleVotingPlayerInfoItem();

};

