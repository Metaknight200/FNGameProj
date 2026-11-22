#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyFinishReason.h"
#include "FortniteGameEditorDelegateStubs.generated.h"
// Recovered 17.50 delegate signatures; the header name preserves existing includes.
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnClientEventFlagChanged, FString, EventName, FTimespan, TimeUntilEnd, FTimespan, TimeSinceBegin, float, TimeSpanRatio);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortPlayerSurveyFinished, UObject*, Source, EFortPlayerSurveyFinishReason, Reason);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnClampStateChanged, bool, bIsClamped, bool, bIsClampedLeft, bool, bIsClampedRight, bool, bIsClampedTop, bool, bIsClampedBottom);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortPlayerSurveyItemChangedInternalDelegate, UObject*, Source, int32, Index);
