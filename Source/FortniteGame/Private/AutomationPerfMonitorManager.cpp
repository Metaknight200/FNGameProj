#include "AutomationPerfMonitorManager.h"

UAutomationPerfMonitorManager::UAutomationPerfMonitorManager() {
    this->bRecording = false;
    this->TimeSinceLastRecord = 0.00f;
    this->LastGoodFrame = -1;
}

void UAutomationPerfMonitorManager::StopRecordingFTestPerf() {
}

void UAutomationPerfMonitorManager::StartRecordingFTestPerf(TArray<FString> StatsToRecord) {
}

bool UAutomationPerfMonitorManager::IsRecordingFTestPerf() {
    return false;
}

float UAutomationPerfMonitorManager::GetStatAverage(const FString& StatName) {
    return 0.0f;
}

UAutomationPerfMonitorManager* UAutomationPerfMonitorManager::GetPerfMonitorInstance() {
    return NULL;
}


