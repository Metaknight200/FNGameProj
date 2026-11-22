#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "HUDWidgetBehaviorExtensionsRegistryEntry.generated.h"

class UFortMobileHUDWidgetBehaviorExtension;

USTRUCT(BlueprintType)
struct FHUDWidgetBehaviorExtensionsRegistryEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HUDWidgetBehaviorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortMobileHUDWidgetBehaviorExtension>> HUDWidgetBehaviorExtensions;
    
    FORTNITEUI_API FHUDWidgetBehaviorExtensionsRegistryEntry();
};

