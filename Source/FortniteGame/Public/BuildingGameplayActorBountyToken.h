#pragma once
#include "CoreMinimal.h"
#include "BuildingGameplayActor.h"
#include "BuildingGameplayActorBountyToken.generated.h"

UCLASS(Blueprintable)
class ABuildingGameplayActorBountyToken : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
    ABuildingGameplayActorBountyToken(const FObjectInitializer& ObjectInitializer);

};

