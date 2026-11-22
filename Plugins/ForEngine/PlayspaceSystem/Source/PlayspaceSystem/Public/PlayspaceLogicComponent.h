#pragma once
#include "CoreMinimal.h"
#include "GameFrameworkComponent.h"
#include "PlayspaceLogicComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PLAYSPACESYSTEM_API UPlayspaceLogicComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    UPlayspaceLogicComponent(const FObjectInitializer& ObjectInitializer);

};

