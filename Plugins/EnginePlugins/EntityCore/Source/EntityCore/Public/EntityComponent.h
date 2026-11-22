#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Interfaces/Interface_ActorSubobject.h"
#include "EntityComponent.generated.h"

UCLASS(Abstract, Blueprintable)
class ENTITYCORE_API UEntityComponent : public UObject, public IInterface_ActorSubobject {
    GENERATED_BODY()
public:
    UEntityComponent();


    // Fix for true pure virtual functions not being implemented
};

