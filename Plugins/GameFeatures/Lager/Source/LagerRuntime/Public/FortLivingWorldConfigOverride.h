#pragma once
#include "CoreMinimal.h"
#include "FortReleaseVersion.h"
#include "GameplayTagContainer.h"
#include "FortLivingWorldConfigOverride.generated.h"

class UFortAthenaLivingWorldConfigData;
class UWorld;

USTRUCT(BlueprintType)
struct FFortLivingWorldConfigOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> SourceWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PlaylistTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAthenaLivingWorldConfigData> LagerConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortReleaseVersion StartVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortReleaseVersion EndVersion;
    
    LAGERRUNTIME_API FFortLivingWorldConfigOverride();
};

