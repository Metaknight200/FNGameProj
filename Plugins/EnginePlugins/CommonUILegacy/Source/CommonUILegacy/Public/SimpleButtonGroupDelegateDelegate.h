#pragma once
#include "CoreMinimal.h"
#include "SimpleButtonGroupDelegateDelegate.generated.h"

class UCommonButtonLegacy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSimpleButtonGroupDelegate, UCommonButtonLegacy*, AssociatedButton, int32, ButtonIndex);

