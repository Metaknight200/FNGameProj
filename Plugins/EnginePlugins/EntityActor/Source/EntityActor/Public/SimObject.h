#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AbilitySystemInterface.h"
#include "SimObject.generated.h"

UCLASS(Blueprintable)
class ENTITYACTOR_API ASimObject : public AActor, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
    ASimObject(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
public:
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return nullptr; }
};

