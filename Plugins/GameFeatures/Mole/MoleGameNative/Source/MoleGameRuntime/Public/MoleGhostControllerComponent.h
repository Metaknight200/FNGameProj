#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "MoleGhostControllerComponent.generated.h"

class UInputComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMoleGhostControllerComponent : public UFortControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* GhostInputComp;
    
public:
    UMoleGhostControllerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerBecameGhost();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void CLientSetupGhost();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRevertGhost();
    
};

