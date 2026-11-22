#include "SmartObjectBlueprintFunctionLibrary.h"

USmartObjectBlueprintFunctionLibrary::USmartObjectBlueprintFunctionLibrary() {
}

bool USmartObjectBlueprintFunctionLibrary::K2_UseSmartObject(AActor* Avatar, AActor* SmartObject) {
    return false;
}

bool USmartObjectBlueprintFunctionLibrary::K2_SetSmartObjectEnabled(AActor* SmartObject, const bool bEnabled) {
    return false;
}

bool USmartObjectBlueprintFunctionLibrary::K2_RemoveLooseGameplayTags(AActor* Actor, const FGameplayTagContainer& GameplayTags) {
    return false;
}

bool USmartObjectBlueprintFunctionLibrary::K2_AddLooseGameplayTags(AActor* Actor, const FGameplayTagContainer& GameplayTags) {
    return false;
}


