#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortRarity.h"
#include "Engine/NetSerialization.h"
#include "VendettaBountyPuckTargetData.generated.h"

class AFortPlayerStateAthena;
class UBountyPuckWeaponComponent;

USTRUCT(BlueprintType)
struct FVendettaBountyPuckTargetData : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TrackerGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* TargetPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* OwnerPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 BonusReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    EFortRarity Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBountyPuckWeaponComponent* BountyPuckWeaponComponent;
    
    VENDETTARUNTIME_API FVendettaBountyPuckTargetData();
};

