#pragma once
#include "CoreMinimal.h"
#include "GameFeatureAction.h"
#include "GameFeatureAction_DataRegistry.generated.h"

class UDataRegistry;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UGameFeatureAction_DataRegistry : public UGameFeatureAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDataRegistry>> RegistriesToAdd;
    
public:
    UGameFeatureAction_DataRegistry();

};

