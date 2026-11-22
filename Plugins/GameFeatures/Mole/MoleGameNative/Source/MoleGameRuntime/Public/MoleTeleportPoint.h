#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoleTeleportPoint.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AMoleTeleportPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SpawnPoint;
    
public:
    AMoleTeleportPoint(const FObjectInitializer& ObjectInitializer);

};

