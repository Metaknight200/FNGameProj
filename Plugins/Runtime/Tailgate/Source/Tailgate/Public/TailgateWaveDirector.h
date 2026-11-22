#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "TailgateWaveDirector.generated.h"

class UTailgateMultiplierSystem;
class UTailgateWaveDefinition;

UCLASS(Blueprintable, MinimalAPI)
class ATailgateWaveDirector : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTailgateWaveDefinition>> WaveDefinitionClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTailgateWaveDefinition*> WaveDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTailgateMultiplierSystem> MultiplierSystemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTailgateMultiplierSystem* MultiplierSystem;
    
public:
    ATailgateWaveDirector(const FObjectInitializer& ObjectInitializer);

};

