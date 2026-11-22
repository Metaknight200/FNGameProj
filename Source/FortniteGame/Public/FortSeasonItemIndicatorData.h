#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortSeasonItemMapData.h"
#include "FortSeasonItemIndicatorData.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortSeasonItemIndicatorData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortSeasonItemMapData> SeasonItemMapData;
    
public:
    UFortSeasonItemIndicatorData();

};

