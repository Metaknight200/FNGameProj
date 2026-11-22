#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EVendettaHuntedStatus.h"
#include "VendettaPlayerHuntedStatus.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FVendettaPlayerHuntedStatus : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* PlayerState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EVendettaHuntedStatus HuntedStatusReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EVendettaHuntedStatus MasterHunterHuntedStatusReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    EVendettaHuntedStatus HuntedStatusLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    EVendettaHuntedStatus MasterHunterHuntedStatusLocal;
    
public:
    VENDETTARUNTIME_API FVendettaPlayerHuntedStatus();
};

