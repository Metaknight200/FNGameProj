#pragma once
#include "CoreMinimal.h"
#include "FortInGameMapManagerAthena.h"
#include "SkyfireInGameMapManager.generated.h"

class AFortAthenaMutator_Skyfire;

UCLASS(Blueprintable)
class SKYFIRERUNTIME_API ASkyfireInGameMapManager : public AFortInGameMapManagerAthena {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Skyfire* CachedSkyfireMutator;
    
public:
    ASkyfireInGameMapManager(const FObjectInitializer& ObjectInitializer);

};

