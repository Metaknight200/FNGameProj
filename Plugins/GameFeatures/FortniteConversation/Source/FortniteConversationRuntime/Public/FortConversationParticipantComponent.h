#pragma once
#include "CoreMinimal.h"
#include "ConversationParticipantComponent.h"
#include "FortConversationParticipantComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortConversationParticipantComponent : public UConversationParticipantComponent {
    GENERATED_BODY()
public:
    UFortConversationParticipantComponent(const FObjectInitializer& ObjectInitializer);

};

