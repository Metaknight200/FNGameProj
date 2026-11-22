#pragma once
#include "CoreMinimal.h"
#include "DataRegistrySourceToAdd.h"
#include "GameFeatureAction.h"
#include "GameFeatureAction_DataRegistrySource.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UGameFeatureAction_DataRegistrySource : public UGameFeatureAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataRegistrySourceToAdd> SourcesToAdd;
    
public:
    UGameFeatureAction_DataRegistrySource();

};

