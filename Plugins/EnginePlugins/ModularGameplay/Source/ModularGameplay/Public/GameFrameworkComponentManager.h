#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFrameworkComponentManager.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI)
class UGameFrameworkComponentManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UGameFrameworkComponentManager();

    UFUNCTION(BlueprintCallable)
    void RemoveReceiver(AActor* Receiver);
    
    UFUNCTION(BlueprintCallable)
    void AddReceiver(AActor* Receiver, bool bAddOnlyInGameWorlds);
    
};

