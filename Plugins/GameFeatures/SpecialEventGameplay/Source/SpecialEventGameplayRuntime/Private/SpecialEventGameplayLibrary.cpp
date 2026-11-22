#include "SpecialEventGameplayLibrary.h"

USpecialEventGameplayLibrary::USpecialEventGameplayLibrary() {
}

void USpecialEventGameplayLibrary::SetNextLoadingScreen(UObject* WorldContextObject, const UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition, const bool bCanShowLoadingBar) {
}

ASpecialEventScript* USpecialEventGameplayLibrary::GetSpecialEventScript(UObject* WorldContextObject) {
    return NULL;
}

AFortAthenaMutator_SpecialEvent* USpecialEventGameplayLibrary::GetSpecialEventMutator(UObject* WorldContextObject) {
    return NULL;
}

void USpecialEventGameplayLibrary::ForceUpdateGrass(UObject* WorldContextObject, const FVector Location) {
}

UFortControllerComponent_SpecialEvent* USpecialEventGameplayLibrary::FindSpecialEventComponent(AController* Controller) {
    return NULL;
}

UFortControllerComponent_GameplayCinematic* USpecialEventGameplayLibrary::FindGameplayCinematicComponent(AController* Controller) {
    return NULL;
}


