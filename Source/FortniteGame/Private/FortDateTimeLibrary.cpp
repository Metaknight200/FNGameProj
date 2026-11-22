#include "FortDateTimeLibrary.h"

UFortDateTimeLibrary::UFortDateTimeLibrary() {
}

FTimespan UFortDateTimeLibrary::GetTimeTillEventTagEnds(const AFortPlayerController* FortPC, const FString& EventTag) {
    return FTimespan{};
}

FText UFortDateTimeLibrary::GetTimespanAsText(const FTimespan& Timespan, bool bShowSeconds, ETimespanAsTextFormat FormatType, ETimespanUnitDisplayFormat UnitDisplayType) {
    return FText::GetEmpty();
}

FTimespan UFortDateTimeLibrary::GetTimeSinceEventTagStart(const AFortPlayerController* FortPC, const FString& EventTag) {
    return FTimespan{};
}

FTimespan UFortDateTimeLibrary::GetTimeSinceAthenaSeasonStart(const AFortPlayerController* FortPC) {
    return FTimespan{};
}

FDateTime UFortDateTimeLibrary::GetMcpRelativeUtcNow(const AFortPlayerController* FortPC) {
    return FDateTime{};
}


