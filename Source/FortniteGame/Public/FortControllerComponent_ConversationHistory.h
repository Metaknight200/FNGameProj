#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "FortControllerComponent_ConversationHistory.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_ConversationHistory : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UFortControllerComponent_ConversationHistory(const FObjectInitializer& ObjectInitializer);

};

