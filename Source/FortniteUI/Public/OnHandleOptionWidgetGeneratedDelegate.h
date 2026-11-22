#pragma once
#include "CoreMinimal.h"
#include "OnHandleOptionWidgetGeneratedDelegate.generated.h"

class UPlaylistUserOptionBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHandleOptionWidgetGenerated, const UPlaylistUserOptionBase*, InPlaylistUserOption);

