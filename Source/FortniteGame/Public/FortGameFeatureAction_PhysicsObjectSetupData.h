#pragma once
#include "CoreMinimal.h"
#include "GameFeatureAction.h"
#include "FortGameFeatureAction_PhysicsObjectSetupData.generated.h"

class UFortPhysicsObjectAssetSetupData;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFortGameFeatureAction_PhysicsObjectSetupData : public UGameFeatureAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPhysicsObjectAssetSetupData* PhysicsObjectSetupAsset;
    
public:
    UFortGameFeatureAction_PhysicsObjectSetupData();

};

