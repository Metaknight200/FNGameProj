#include "FortGameplayCueNotifyAthena_AIAlertState.h"
#include "Components/StaticMeshComponent.h"

AFortGameplayCueNotifyAthena_AIAlertState::AFortGameplayCueNotifyAthena_AIAlertState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpriteMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpriteMeshComponent"));
    this->SpriteMeshAttachSocketName = TEXT("head");
    this->FillIconDataFloatIndex = 10;
    this->StealthMeterStartValue = 0.00f;
    this->CurrentGameplayEffectLevel = 0;
    this->CurrentStealthMeterPctFilled = 0.00f;
    this->CurrentAlertStateComponent = NULL;
}

void AFortGameplayCueNotifyAthena_AIAlertState::HandleAbilitySystemComponentInitialized(UFortAbilitySystemComponent* AbilitySystemComponent, AFortPlayerPawn* Pawn) {
}

void AFortGameplayCueNotifyAthena_AIAlertState::AlertStateHideTagCallback(const FGameplayTag Tag, int32 NewCount) {
}


