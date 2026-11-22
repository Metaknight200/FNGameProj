#pragma once
#include "CoreMinimal.h"
#include "FortniteUIEditorDelegateStubs.generated.h"

class UFortSetting;
// Recovered 17.50 delegate signatures; the header name preserves existing includes.
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryUpdated);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPrePromptClosed);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnExecuteNamedActionBP, UFortSetting*, Setting, FName, Action);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFactionChosenDynamic);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotificationInternalDelegate, UObject*, Source);
