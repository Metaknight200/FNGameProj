#include "FortGlobalEnvironmentAbilityActor.h"
#include "FortAbilitySystemComponent.h"
#include "FortDamageSet.h"

AFortGlobalEnvironmentAbilityActor::AFortGlobalEnvironmentAbilityActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->AbilitySystemComponent = CreateDefaultSubobject<UFortAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->DamageSet = CreateDefaultSubobject<UFortDamageSet>(TEXT("DamageSet"));
}


