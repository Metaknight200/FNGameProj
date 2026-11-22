#pragma once
#include "CoreMinimal.h"
#include "OnPaletteLinkCodesChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPaletteLinkCodesChanged, const TArray<FString>&, LinkCodes);

