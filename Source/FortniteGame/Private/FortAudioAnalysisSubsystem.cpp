#include "FortAudioAnalysisSubsystem.h"

UFortAudioAnalysisSubsystem::UFortAudioAnalysisSubsystem() {
    this->AudioAnalysisSettings = NULL;
    this->DebugWidget = NULL;
}

void UFortAudioAnalysisSubsystem::UnRegisterSubmix(USoundSubmix* InSubmix) {
}

void UFortAudioAnalysisSubsystem::UnRegisterDefaultSubmix() {
}

void UFortAudioAnalysisSubsystem::RegisterSubmix(USoundSubmix* InSubmix, FFortSubmixAnalyzerData InAnalyzerData) {
}

void UFortAudioAnalysisSubsystem::RegisterDefaultSubmix() {
}

UAudioAnalysisSubmixAnalyzer* UFortAudioAnalysisSubsystem::GetAnalyzerForSubmix(USoundSubmix* InSubmix) {
    return NULL;
}

UFortAudioAnalysisSettings* UFortAudioAnalysisSubsystem::GetAnalysisSettings() const {
    return NULL;
}


