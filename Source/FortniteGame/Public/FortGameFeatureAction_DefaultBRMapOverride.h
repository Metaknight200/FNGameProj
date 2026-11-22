#pragma once
#include "CoreMinimal.h"
#include "GameFeatureAction.h"
#include "FortGameFeatureAction_DefaultBRMapOverride.generated.h"

class UWorld;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFortGameFeatureAction_DefaultBRMapOverride : public UGameFeatureAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> OverrideMap;
    
public:
    UFortGameFeatureAction_DefaultBRMapOverride();

};

