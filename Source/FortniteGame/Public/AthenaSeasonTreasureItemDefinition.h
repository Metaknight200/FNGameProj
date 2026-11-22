#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "AthenaSeasonTreasureItemDefinition.generated.h"

UCLASS(Blueprintable)
class UAthenaSeasonTreasureItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UAthenaSeasonTreasureItemDefinition();

public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override { return FPrimaryAssetId("AthenaSeasonTreasure", GetFName()); }
};

