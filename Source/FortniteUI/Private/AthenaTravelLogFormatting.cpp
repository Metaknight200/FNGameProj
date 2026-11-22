#include "AthenaTravelLogFormatting.h"

UAthenaTravelLogFormatting::UAthenaTravelLogFormatting() {
}

bool UAthenaTravelLogFormatting::ShouldDisplayText(const FAthenaTravelLogEntry& Entry) {
    return false;
}

bool UAthenaTravelLogFormatting::IsTravelLogTextDisplayEnabled() {
    return false;
}

FText UAthenaTravelLogFormatting::FormatTravelLogEntry(UObject* WorldContextObject, const FAthenaTravelLogEntry& Entry) {
    return FText::GetEmpty();
}


