#pragma once
#include "CoreMinimal.h"
#include "GameFeatureAction.h"
#include "FortGameFeatureAction_PrimaryAssetBehaviors.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFortGameFeatureAction_PrimaryAssetBehaviors : public UGameFeatureAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AdditionalPrimaryAssetTypesToLoad;
    
    UFortGameFeatureAction_PrimaryAssetBehaviors();

};

