#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "EventMessageTag.h"
#include "BlueprintEventMessageTagLibrary.generated.h"

UCLASS(Blueprintable)
class GAMEPLAYMESSAGES_API UBlueprintEventMessageTagLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueprintEventMessageTagLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEventMessageTag GetEventMessageTagFromGameplayTag(FGameplayTag InTag);
    
};

