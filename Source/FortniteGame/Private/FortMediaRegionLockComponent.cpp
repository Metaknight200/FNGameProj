#include "FortMediaRegionLockComponent.h"

UFortMediaRegionLockComponent::UFortMediaRegionLockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFortMediaRegionLockComponent::SetEventCallback(bool bSet) {
}

void UFortMediaRegionLockComponent::MeshRemoveRegionValue_String(TArray<FMeshRegionLockData_String>& inArray, const FString& InRegionData) {
}

void UFortMediaRegionLockComponent::MeshRemoveRegionValue_Int64(TArray<FMeshRegionLockData_Int64>& inArray, const FString& InRegionData) {
}

void UFortMediaRegionLockComponent::MeshRemoveRegionValue_Int(TArray<FMeshRegionLockData_Int>& inArray, const FString& InRegionData) {
}

void UFortMediaRegionLockComponent::MeshRemoveRegionValue_Float(TArray<FMeshRegionLockData_Float>& inArray, const FString& InRegionData) {
}

void UFortMediaRegionLockComponent::MeshRemoveRegionValue_DateTime(TArray<FMeshRegionLockData_DateTime>& inArray, const FString& InRegionData) {
}

void UFortMediaRegionLockComponent::MeshRemoveRegionValue_Bool(TArray<FMeshRegionLockData_Bool>& inArray, const FString& InRegionData) {
}

bool UFortMediaRegionLockComponent::MeshRemoveRegionTrackerValue(FMeshRegionLockData_Tracker& InTracker, const FString& InRegionData) {
    return false;
}

bool UFortMediaRegionLockComponent::MeshGetRegionValue_String(const FString& InFind, TArray<FMeshRegionLockData_String>& inArray, FMeshRegionLockData_String& OutItem) {
    return false;
}

bool UFortMediaRegionLockComponent::MeshGetRegionValue_Int64(const FString& InFind, TArray<FMeshRegionLockData_Int64>& inArray, FMeshRegionLockData_Int64& OutItem) {
    return false;
}

bool UFortMediaRegionLockComponent::MeshGetRegionValue_Int(const FString& InFind, TArray<FMeshRegionLockData_Int>& inArray, FMeshRegionLockData_Int& OutItem) {
    return false;
}

bool UFortMediaRegionLockComponent::MeshGetRegionValue_Float(const FString& InFind, TArray<FMeshRegionLockData_Float>& inArray, FMeshRegionLockData_Float& OutItem) {
    return false;
}

bool UFortMediaRegionLockComponent::MeshGetRegionValue_DateTime(const FString& InFind, TArray<FMeshRegionLockData_DateTime>& inArray, FMeshRegionLockData_DateTime& OutItem) {
    return false;
}

bool UFortMediaRegionLockComponent::MeshGetRegionValue_Bool(const FString& InFind, TArray<FMeshRegionLockData_Bool>& inArray, FMeshRegionLockData_Bool& OutItem) {
    return false;
}

void UFortMediaRegionLockComponent::MeshAddRegionValue_String(const FString& inString, TArray<FMeshRegionLockData_String>& inArray, const FString& InRegionData) {
}

void UFortMediaRegionLockComponent::MeshAddRegionValue_Int64(const int64 InInt64, TArray<FMeshRegionLockData_Int64>& inArray, const FString& InRegionData) {
}

void UFortMediaRegionLockComponent::MeshAddRegionValue_Int(const int32 inInt, TArray<FMeshRegionLockData_Int>& inArray, const FString& InRegionData) {
}

void UFortMediaRegionLockComponent::MeshAddRegionValue_Float(const float InFloat, TArray<FMeshRegionLockData_Float>& inArray, const FString& InRegionData) {
}

void UFortMediaRegionLockComponent::MeshAddRegionValue_DateTime(const FDateTime InDateTime, TArray<FMeshRegionLockData_DateTime>& inArray, const FString& InRegionData) {
}

void UFortMediaRegionLockComponent::MeshAddRegionValue_Bool(const bool bInBool, TArray<FMeshRegionLockData_Bool>& inArray, const FString& InRegionData) {
}

void UFortMediaRegionLockComponent::MeshAddRegionTrackerValue(FMeshRegionLockData_Tracker& InTracker, const FString& InRegionData) {
}

void UFortMediaRegionLockComponent::GetRegionLockApproval(const AFortPlayerController* FortPC, const FString& UseURL, const FString& Data) {
}

void UFortMediaRegionLockComponent::GetLocale(const AFortPlayerController* FortPC) {
}


