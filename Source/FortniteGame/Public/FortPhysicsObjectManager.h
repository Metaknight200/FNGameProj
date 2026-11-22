#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortPhysicsObjectManager.generated.h"

class AFortPhysicsObjectManager;
class UFortPhysicsObjectComponent;
class UObject;

UCLASS(Blueprintable)
class AFortPhysicsObjectManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortPhysicsObjectComponent*> PhysicsObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortPhysicsObjectComponent*> PhysicsObjectsAwake;
    
public:
    AFortPhysicsObjectManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetPhysicsObjectManager(const UObject* WorldContextObject, AFortPhysicsObjectManager*& Manager);
    
};

