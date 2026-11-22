#pragma once
#include "CoreMinimal.h"
#include "BuildingGameplayActorQuest.h"
#include "BuildingGameplayActorConversationCompatible.generated.h"

UCLASS(Blueprintable)
class ABuildingGameplayActorConversationCompatible : public ABuildingGameplayActorQuest {
    GENERATED_BODY()
public:
    ABuildingGameplayActorConversationCompatible(const FObjectInitializer& ObjectInitializer);

};

