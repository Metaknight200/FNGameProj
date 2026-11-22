#pragma once
#include "CoreMinimal.h"
#include "CraftingObjectOnCraftingSuccessDelegate.generated.h"

class AActor;
class AFortPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCraftingObjectOnCraftingSuccess, AFortPlayerController*, Instigator, AActor*, CraftingObject, const FName&, FormulaRowName);

