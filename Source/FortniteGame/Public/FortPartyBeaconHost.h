#pragma once
#include "CoreMinimal.h"
#include "PartyBeaconHost.h"
#include "PlayerSquadMapping.h"
#include "FortPartyBeaconHost.generated.h"

UCLASS(Blueprintable, NonTransient, Config=Engine)
class AFortPartyBeaconHost : public APartyBeaconHost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerSquadMapping> PlayerSquadMapping;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSquadMappingOverride;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RegionsToUseSquadOverrides;
    
    AFortPartyBeaconHost(const FObjectInitializer& ObjectInitializer);

};

