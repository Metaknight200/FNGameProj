#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoleTaskPoint.generated.h"

class UMoleTaskLinkComponent;

UCLASS(Blueprintable)
class AMoleTaskPoint : public AActor {
    GENERATED_BODY()
public:
    AMoleTaskPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMoleTaskLinkComponent* GetMoleTaskLinkComponent();
    
};

