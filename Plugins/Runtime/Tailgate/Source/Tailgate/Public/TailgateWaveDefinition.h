#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "TailgateWaveDefinition.generated.h"

class UTailgateTargetDefinition;
class UTailgateTargetSpawnerDefinition;

UCLASS(Blueprintable, MinimalAPI)
class UTailgateWaveDefinition : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTailgateTargetSpawnerDefinition>> TargetSpawnerDefinitionClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTailgateTargetSpawnerDefinition*> TargetSpawnerDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTailgateTargetDefinition> DefaultTargetDefinition;
    
public:
    UTailgateWaveDefinition();

};

