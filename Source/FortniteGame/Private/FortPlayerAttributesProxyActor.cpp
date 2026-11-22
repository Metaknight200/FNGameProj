#include "FortPlayerAttributesProxyActor.h"
#include "FortAbilitySystemComponent.h"

AFortPlayerAttributesProxyActor::AFortPlayerAttributesProxyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilitySystemComponent = CreateDefaultSubobject<UFortAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
}


