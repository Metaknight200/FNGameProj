#include "FortUIProxyActor.h"
#include "FortAbilitySystemComponent.h"

AFortUIProxyActor::AFortUIProxyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilitySystemComponent = CreateDefaultSubobject<UFortAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->ItemDef = NULL;
}


