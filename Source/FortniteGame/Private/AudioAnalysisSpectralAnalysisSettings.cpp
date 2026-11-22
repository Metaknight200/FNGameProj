#include "AudioAnalysisSpectralAnalysisSettings.h"

FAudioAnalysisSpectralAnalysisSettings::FAudioAnalysisSpectralAnalysisSettings() {
    this->UpdateRate = 0.00f;
    this->DecibalNoiseFloor = 0.00f;
    this->bDoNormalize = false;
    this->bDoAutoRange = false;
    this->AutoRangeAttackTime = 0.00f;
    this->AutoRangeReleaseTime = 0.00f;
}

