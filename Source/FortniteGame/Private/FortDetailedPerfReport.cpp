#include "FortDetailedPerfReport.h"

UFortDetailedPerfReport::UFortDetailedPerfReport() {
    this->ReportProbability = 0.00f;
    this->bEnabled = true;
    this->bEnableCsvProfile = true;
    this->bUploadAllCsvs = true;
    this->bAllowForcedPerformanceReport = false;
}


