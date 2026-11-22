#pragma once
#include "CoreMinimal.h"
#include "EFortRarity.h"
#include "SkyfirePlayerData.h"
#include "SkyfireSquadDataEntry.generated.h"

class AFortPlayerStateAthena;
class ASkyfireTeleportSquadPoint;

USTRUCT(BlueprintType)
struct SKYFIRERUNTIME_API FSkyfireSquadDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity EarnedLootRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportToLootRoomTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasTeleportedToLootRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkyfireTeleportSquadPoint* PlayspaceTeleportSquadPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkyfireTeleportSquadPoint* PrisonTeleportSquadPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AFortPlayerStateAthena*, FSkyfirePlayerData> SquadMembersInMothershipData;
    
    FSkyfireSquadDataEntry();
};

