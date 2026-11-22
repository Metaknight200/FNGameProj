#include "FortPortalComponent.h"
#include "Net/UnrealNetwork.h"

UFortPortalComponent::UFortPortalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ThumbnailTexture = NULL;
    this->ThumbnailTextureWidth = 0;
    this->ThumbnailTextureHeight = 0;
    this->LinkCodeLockMode = EPortalLinkCodeLockMode::AlwaysLocked;
    this->LinkCodeLockStatus = EPortalLinkCodeLockStatus::Unlocked_NotSet;
    this->bWindowLockedStartsLocked = true;
    this->bHasValidLinkData = false;
    this->bLinkRequiresCreativeContent = false;
}

void UFortPortalComponent::SetResetCodeAfterCooldown(bool bNewResetCodeAfterCooldown) {
}

void UFortPortalComponent::SetLockOverrideExpirationSeconds(int32 NewExpirationSeconds) {
}

void UFortPortalComponent::SetLockExpirationSecondsToNotOverrideCVar() {
}

void UFortPortalComponent::ServerSetLinkCode_Complete(bool bSuccess, const FString& ErrorMessage, const FCreativeLoadedLinkData& InLinkData) {
}

void UFortPortalComponent::ServerSetLinkCode(const FString& InLinkCode, bool bIgnoreCanSetLinkCode, bool bFromDAD) {
}

void UFortPortalComponent::OnRep_LoadedLinkData() {
}

void UFortPortalComponent::OnRep_LinkDataErrorStatus() {
}

void UFortPortalComponent::OnRep_LinkCodeLockStatus() {
}

void UFortPortalComponent::OnMinigameStarted() {
}

void UFortPortalComponent::OnLinkThumbnailDownloaded(bool bSuccess, UTexture2DDynamic* InThumbnailTexture) {
}

void UFortPortalComponent::OnLinkCodeLockExpired() {
}

FString UFortPortalComponent::MakeLinkCodeWithVersioning(const FString& LinkCode, int32 Version) const {
    return TEXT("");
}

FString UFortPortalComponent::MakeLinkCodeWithoutVersioning(const FString& LinkCode, int32& Version) const {
    return TEXT("");
}

bool UFortPortalComponent::LinkRequiresCreativeContent() {
    return false;
}

bool UFortPortalComponent::IsWellKnownNameSupported() const {
    return false;
}

bool UFortPortalComponent::IsPartyEligibleForMatchmaking() const {
    return false;
}

bool UFortPortalComponent::HasValidLinkData() const {
    return false;
}

FTimespan UFortPortalComponent::GetRemainingLockDuration() const {
    return FTimespan{};
}

FString UFortPortalComponent::GetAccountIdOwnerOfIsland() const {
    return TEXT("");
}

void UFortPortalComponent::ExpireLinkCodeLock() {
}

bool UFortPortalComponent::CanSetLinkCode() const {
    return false;
}

void UFortPortalComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPortalComponent, LoadedLinkData);
    DOREPLIFETIME(UFortPortalComponent, LinkDataErrorStatus);
    DOREPLIFETIME(UFortPortalComponent, LinkCodeLockMode);
    DOREPLIFETIME(UFortPortalComponent, LinkCodeLockStatus);
    DOREPLIFETIME(UFortPortalComponent, bHasValidLinkData);
    DOREPLIFETIME(UFortPortalComponent, bLinkRequiresCreativeContent);
    DOREPLIFETIME(UFortPortalComponent, LinkCodeLockExpirationTime);
}


