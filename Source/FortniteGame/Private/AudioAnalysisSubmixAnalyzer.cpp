#include "AudioAnalysisSubmixAnalyzer.h"

UAudioAnalysisSubmixAnalyzer::UAudioAnalysisSubmixAnalyzer() {
    this->Submix = NULL;
    this->OwningSubsystem = NULL;
}

void UAudioAnalysisSubmixAnalyzer::OnSubmixSpectralAnalysis(const TArray<float>& Amplitudes) {
}

void UAudioAnalysisSubmixAnalyzer::OnSubmixEnvelope(const TArray<float>& Amplitudes) {
}


