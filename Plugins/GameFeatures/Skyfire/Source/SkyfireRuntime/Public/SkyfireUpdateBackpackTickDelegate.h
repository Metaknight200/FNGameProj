#pragma once
#include "CoreMinimal.h"
#include "SkyfireUpdateBackpackTickDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSkyfireUpdateBackpackTick, const int32, SecondsRemaining);

