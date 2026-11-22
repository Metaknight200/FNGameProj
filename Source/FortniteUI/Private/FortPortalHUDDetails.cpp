#include "FortPortalHUDDetails.h"

UFortPortalHUDDetails::UFortPortalHUDDetails() {
    this->MarkerPointer = NULL;
    this->MobileInfo_Matchmaking_Switcher = NULL;
}

void UFortPortalHUDDetails::SetCachedWorldPos(FVector InWorldPos) {
}

void UFortPortalHUDDetails::SetActiveMatchmakingTextIndex(int32 NewIndex) {
}

void UFortPortalHUDDetails::SetActiveContextInfo(UFortInteractContextInfo* ActiveContextInfo) {
}

void UFortPortalHUDDetails::HandleMatchmakingComplete(bool Success) {
}

UFortInteractContextInfo* UFortPortalHUDDetails::GetActiveContextInfo() {
    return NULL;
}

void UFortPortalHUDDetails::ClearCachedWorldPos() {
}


