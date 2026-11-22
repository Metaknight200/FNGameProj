#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "FortSafeZoneStorm.generated.h"

UCLASS(Blueprintable)
class AFortSafeZoneStorm : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference StormEffectsMeshRef;
    
public:
    AFortSafeZoneStorm(const FObjectInitializer& ObjectInitializer);

};

