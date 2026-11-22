#include "FortCreativeBudgetLibrary.h"
#include "Templates/SubclassOf.h"

UFortCreativeBudgetLibrary::UFortCreativeBudgetLibrary() {
}

bool UFortCreativeBudgetLibrary::CanPlaceInstanceOfClass(APlayerController* Controller, TSubclassOf<AActor> Class, const FVector& Location) {
    return false;
}

bool UFortCreativeBudgetLibrary::CanPlaceClassInstances(APlayerController* Controller, const TArray<TSubclassOf<AActor>> Classes, const FVector& Location) {
    return false;
}


