#pragma once
#include "CoreMinimal.h"
#include "FortEventResponderComponent.h"
#include "PapayaTimedEventsResponderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPapayaTimedEventsResponderComponent : public UFortEventResponderComponent {
    GENERATED_BODY()
public:
    UPapayaTimedEventsResponderComponent(const FObjectInitializer& ObjectInitializer);

};

