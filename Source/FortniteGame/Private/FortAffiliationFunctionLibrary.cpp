#include "FortAffiliationFunctionLibrary.h"

UFortAffiliationFunctionLibrary::UFortAffiliationFunctionLibrary() {
}

void UFortAffiliationFunctionLibrary::RemoveFromFaction(const AActor* Actor, const FGameplayTag FactionTag) {
}

void UFortAffiliationFunctionLibrary::RemoveFromAllFactions(const AActor* Actor) {
}

FGameplayTagContainer UFortAffiliationFunctionLibrary::GetCurrentFactions(const AActor* Actor) {
    return FGameplayTagContainer{};
}

void UFortAffiliationFunctionLibrary::ChangeAttitudeBetweenActors(UObject* WorldContextObject, const AActor* FactionOwner, const AActor* TowardsActor, const TEnumAsByte<EFortFactionAttitude::Type> Attitude) {
}

void UFortAffiliationFunctionLibrary::AddToFactions(const AActor* Actor, const FGameplayTagContainer& FactionsTagContainer) {
}

void UFortAffiliationFunctionLibrary::AddToFaction(const AActor* Actor, const FGameplayTag FactionTag) {
}


