#include "FortCreativeTeleporterManagerComponent.h"

UFortCreativeTeleporterManagerComponent::UFortCreativeTeleporterManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TeleporterGroupList.AddDefaulted(26);
}

void UFortCreativeTeleporterManagerComponent::UnregisterTeleporterFromGroup(AFortCreativeTeleporter* TeleporterToUnregister, const EFortCreativeTeleporterGroup GroupToUnregisterOn) {
}

bool UFortCreativeTeleporterManagerComponent::RequestPermissionToTeleportPawn(const AFortPlayerPawn* PlayerPawn, const AFortCreativeTeleporter* RequestingTeleporter, const FGameplayTagContainer ChannelIdContainer) const {
    return false;
}

void UFortCreativeTeleporterManagerComponent::RegisterTeleporterWithGroup(AFortCreativeTeleporter* TeleporterToRegister, const EFortCreativeTeleporterGroup GroupToRegisterOn) {
}

TSet<AFortCreativeTeleporter*> UFortCreativeTeleporterManagerComponent::GetTeleportersInGroup(const EFortCreativeTeleporterGroup Group) const {
    return TSet<AFortCreativeTeleporter*>();
}


