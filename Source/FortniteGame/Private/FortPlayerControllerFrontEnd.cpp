#include "FortPlayerControllerFrontEnd.h"
#include "AthenaMarkerComponent.h"
#include "FortControllerComponent_MapDiscoverability.h"
#include "FortControllerComponent_SeasonItem.h"
#include "FortPlayerCameraBase.h"

AFortPlayerControllerFrontEnd::AFortPlayerControllerFrontEnd(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = AFortPlayerCameraBase::StaticClass();
    this->bShowMouseCursor = true;
    this->bEnableClickEvents = true;
    this->bEnableMouseOverEvents = true;
    this->ClickEventKeys.AddDefaulted(1);
    this->DefaultClickTraceChannel = ECC_Camera;
    this->bUsesWidgetForFPSDisplay = true;
    this->DiscoverabilityComponent = CreateDefaultSubobject<UFortControllerComponent_MapDiscoverability>(TEXT("DiscoverabilityComponent"));
    this->SeasonItemComponent = CreateDefaultSubobject<UFortControllerComponent_SeasonItem>(TEXT("SeasonItemComponent"));
    this->bUnlockAllZones = false;
    this->MarkerComponent = CreateDefaultSubobject<UAthenaMarkerComponent>(TEXT("MarkerComponent"));
}

void AFortPlayerControllerFrontEnd::StopWriteToAudioFile() {
}

void AFortPlayerControllerFrontEnd::StopFacialAnimationTest() {
}

void AFortPlayerControllerFrontEnd::StartWriteToAudioFile() {
}

void AFortPlayerControllerFrontEnd::RunFacialAnimationTest(const FString& WaveFileName, int32 SampleRate) {
}

void AFortPlayerControllerFrontEnd::OpenEmotePicker() {
}

bool AFortPlayerControllerFrontEnd::IsVoiceChatPlayerMuted(const FUniqueNetIdRepl& UniqueNetId) {
    return false;
}

bool AFortPlayerControllerFrontEnd::IsInVoiceChat() {
    return false;
}

bool AFortPlayerControllerFrontEnd::HasPendingPhoenixLevelUpNotifications() const {
    return false;
}

void AFortPlayerControllerFrontEnd::EmotePickerSelect() {
}

void AFortPlayerControllerFrontEnd::EmotePickerPrevWheel() {
}

void AFortPlayerControllerFrontEnd::EmotePickerNextWheel() {
}

void AFortPlayerControllerFrontEnd::CloseEmotePicker() {
}


