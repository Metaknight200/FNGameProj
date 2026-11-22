#include "PegasusDriver.h"

UPegasusDriver::UPegasusDriver() {
    this->PollIntervalSeconds = 60.00f;
    this->BaseHoursUntilClose = 8.00f;
    this->VideoManager = NULL;
    this->bShouldDevBuildsShowFPS = true;
    this->InactivityCheckSecondsInterval = 60.00f;
    this->MaxSecondsBetweenVideoExports = 2100.00f;
}

void UPegasusDriver::HandleVideoManagerJobShotWatched(const FVideoManagerExtractionJob& VideoManagerJob, const FWatchedReplayShotInfo& WatchedInfo) {
}

void UPegasusDriver::HandleVideoManagerJobShotExported(const FVideoManagerExtractionJob& VideoManagerJob, int32 ShotIndex, const FString& VideoPath) {
}

void UPegasusDriver::HandleVideoManagerJobFailed(const FVideoManagerExtractionJob& ExtractionJob, const FString& FailureReason, const FString& ErrorCode) {
}

void UPegasusDriver::HandleVideoManagerJobComplete(const FVideoManagerExtractionJob& ExtractionJob) {
}

void UPegasusDriver::HandleVideoManagerJobBeganProcessing(const FVideoManagerExtractionJob& ExtractionJob) {
}

void UPegasusDriver::HandleVideoManagerFinishedAllJobs() {
}


