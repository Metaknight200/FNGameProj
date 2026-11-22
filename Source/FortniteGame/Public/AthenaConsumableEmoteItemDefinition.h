#pragma once
#include "CoreMinimal.h"
#include "FortMontageItemDefinitionBase.h"
#include "AthenaConsumableEmoteItemDefinition.generated.h"

UCLASS(Blueprintable)
class UAthenaConsumableEmoteItemDefinition : public UFortMontageItemDefinitionBase {
    GENERATED_BODY()
public:
    UAthenaConsumableEmoteItemDefinition();

public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override { return FPrimaryAssetId("AthenaConsumableEmote", GetFName()); }
};

