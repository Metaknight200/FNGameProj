#pragma once
#include "CoreMinimal.h"
#include "EFortDayPhase.h"
#include "DayNightPhaseChangeBlueprintEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDayNightPhaseChangeBlueprintEventSignature, TEnumAsByte<EFortDayPhase::Type>, CurrentDayPhase, TEnumAsByte<EFortDayPhase::Type>, PreviousDayPhase, bool, bAtCreation);

