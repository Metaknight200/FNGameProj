#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayspaceSpawnActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class PLAYSPACESYSTEM_API APlayspaceSpawnActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
public:
    APlayspaceSpawnActor(const FObjectInitializer& ObjectInitializer);

};

