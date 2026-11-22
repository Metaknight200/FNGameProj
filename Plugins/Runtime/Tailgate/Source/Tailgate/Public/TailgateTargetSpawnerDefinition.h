#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "TailgateTargetSpawnerDefinition.generated.h"

class UTailgateTargetDefinition;
class UTailgateTargetSpawnCondition;

UCLASS(Blueprintable, MinimalAPI)
class UTailgateTargetSpawnerDefinition : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpawnerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTailgateTargetSpawnCondition*> SpawnConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTailgateTargetDefinition> TargetDefinitionOverride;
    
public:
    UTailgateTargetSpawnerDefinition();

};

