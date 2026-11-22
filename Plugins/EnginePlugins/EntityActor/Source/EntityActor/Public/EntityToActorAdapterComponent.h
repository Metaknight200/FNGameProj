#pragma once
#include "CoreMinimal.h"
#include "EntityComponent.h"
#include "EntityToActorAdapterComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ENTITYACTOR_API UEntityToActorAdapterComponent : public UEntityComponent {
    GENERATED_BODY()
public:
    UEntityToActorAdapterComponent();

};

