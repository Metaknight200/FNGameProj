#include "BlueprintContextLibrary.h"
#include "Templates/SubclassOf.h"

UBlueprintContextLibrary::UBlueprintContextLibrary() {
}

USubsystem* UBlueprintContextLibrary::GetContext(UObject* ContextObject, TSubclassOf<USubsystem> Class) {
    return NULL;
}


