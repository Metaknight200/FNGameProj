#pragma once
#include "CoreMinimal.h"
#include "OnKnobDataInitializedDelegate.generated.h"

class UPlaylistUserOptionBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKnobDataInitialized, const UPlaylistUserOptionBase*, InPlaylistUserOption);

