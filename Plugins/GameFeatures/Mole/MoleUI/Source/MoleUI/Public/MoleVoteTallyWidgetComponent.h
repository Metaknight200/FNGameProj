#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "MoleVoteTallyWidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMoleVoteTallyWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UMoleVoteTallyWidgetComponent(const FObjectInitializer& ObjectInitializer);

};

