#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortPlayerSaveComponent.generated.h"

class UVkPersistenceManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortPlayerSaveComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVkPersistenceManager* PersistenceManager;
    
public:
    UFortPlayerSaveComponent(const FObjectInitializer& ObjectInitializer);

};

