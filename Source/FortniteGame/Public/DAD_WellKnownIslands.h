#pragma once
#include "CoreMinimal.h"
#include "DAD_Island.h"
#include "FortDataAssetDirectoryPatchableAsset.h"
#include "DAD_WellKnownIslands.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UDAD_WellKnownIslands : public UFortDataAssetDirectoryPatchableAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDAD_Island> WellKnownIslandsList;
    
public:
    UDAD_WellKnownIslands();

};

