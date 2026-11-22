#pragma once
#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "FortAbilitySystemInterface.generated.h"

UINTERFACE(MinimalAPI)
class UFortAbilitySystemInterface : public UAbilitySystemInterface {
    GENERATED_BODY()
};

class IFortAbilitySystemInterface : public IAbilitySystemInterface {
    GENERATED_BODY()
public:
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return nullptr; }
};

