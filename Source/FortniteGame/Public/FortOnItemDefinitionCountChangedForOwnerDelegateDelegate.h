#pragma once
#include "CoreMinimal.h"
#include "FortOnItemDefinitionCountChangedForOwnerDelegateDelegate.generated.h"

class IFortInventoryOwnerInterface;
class UFortInventoryOwnerInterface;
class UFortItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFortOnItemDefinitionCountChangedForOwnerDelegate, TScriptInterface<IFortInventoryOwnerInterface>, InventoryOwner, UFortItemDefinition*, Definition, int32, Delta);

