#include "FortLevelSaveComponent.h"
#include "Net/UnrealNetwork.h"

UFortLevelSaveComponent::UFortLevelSaveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RestrictedPlotDefinition = NULL;
    this->bAutoLoadFromRestrictedPlotDefinition = false;
    this->LinkCodeNumberToAutoLoad = -1;
    this->bLoadRandomLinkCode = false;
    this->bLoadMatchAssignedCode = false;
    this->bCuratedHub = false;
    this->bLoadPlaysetFromPlot = true;
    this->LoadedPlot = NULL;
    this->bPermissionsSaveInProgress = false;
    this->bCurated = false;
    this->bIsLoaded = false;
    this->bIsAutoSaving = false;
    this->BackupSaveState = EBackupSaveState::Ready;
    this->RestoringState = EBackupSaveState::Ready;
    this->PublishRateLimitSeconds = 60;
    this->BackupRateLimitSeconds = 60;
    this->RestoreRateLimitSeconds = 120;
}

void UFortLevelSaveComponent::OnRep_RestoringStateChanged(EBackupSaveState OldValue) {
}

void UFortLevelSaveComponent::OnRep_PlotPermissionsChanged() {
}

void UFortLevelSaveComponent::OnRep_PaletteLinkCodes() {
}

void UFortLevelSaveComponent::OnRep_OwnerCreativePermissions() {
}

void UFortLevelSaveComponent::OnRep_LoadedPlotInstanceId() {
}

void UFortLevelSaveComponent::OnRep_LoadedLinkData() {
}

void UFortLevelSaveComponent::OnRep_Loaded() {
}

void UFortLevelSaveComponent::OnRep_LastCheckpointDate(FDateTime OldValue) {
}

void UFortLevelSaveComponent::OnRep_IsAutoSaving(bool bOldValue) {
}

void UFortLevelSaveComponent::OnRep_BackupSaveState(EBackupSaveState OldValue) {
}

void UFortLevelSaveComponent::K2_GetLoadedLinkData(FCreativeLoadedLinkData& LinkData) const {
}

bool UFortLevelSaveComponent::IsLoaded() const {
    return false;
}

bool UFortLevelSaveComponent::IsCurated() const {
    return bCurated;
}

FUniqueNetIdRepl UFortLevelSaveComponent::GetAccountIdOfOwner() const {
    return FUniqueNetIdRepl{};
}

bool UFortLevelSaveComponent::DoesPlayerHavePermissionToEdit(const FUniqueNetIdRepl& UserRequestingPermission) const {
    return false;
}

void UFortLevelSaveComponent::CloudSaveFinished(const FAsyncTaskResult& Result) {
}

void UFortLevelSaveComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortLevelSaveComponent, PaletteLinkCodes);
    DOREPLIFETIME(UFortLevelSaveComponent, AccountIdOfOwner);
    DOREPLIFETIME(UFortLevelSaveComponent, OwnerCreativePermissions);
    DOREPLIFETIME(UFortLevelSaveComponent, bCurated);
    DOREPLIFETIME(UFortLevelSaveComponent, PlotPermissions);
    DOREPLIFETIME(UFortLevelSaveComponent, LoadedPlotInstanceId);
    DOREPLIFETIME(UFortLevelSaveComponent, LoadedLinkData);
    DOREPLIFETIME(UFortLevelSaveComponent, bIsLoaded);
    DOREPLIFETIME(UFortLevelSaveComponent, bIsAutoSaving);
    DOREPLIFETIME(UFortLevelSaveComponent, BackupSaveState);
    DOREPLIFETIME(UFortLevelSaveComponent, RestoringState);
    DOREPLIFETIME(UFortLevelSaveComponent, LastCheckpointDateUtc);
}


