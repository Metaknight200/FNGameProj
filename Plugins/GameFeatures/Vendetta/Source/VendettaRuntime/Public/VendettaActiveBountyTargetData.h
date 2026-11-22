#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "VendettaActiveBountyTargetData.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FVendettaActiveBountyTargetData : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* BountyOwningPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BountyTargetLocation2D;
    
    VENDETTARUNTIME_API FVendettaActiveBountyTargetData();
};

