#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "FortAthenaSpawnerDataBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UFortAthenaSpawnerDataBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DescriptorTag;
    
    UFortAthenaSpawnerDataBase();

};

