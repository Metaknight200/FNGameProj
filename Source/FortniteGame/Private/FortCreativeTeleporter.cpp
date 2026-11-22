#include "FortCreativeTeleporter.h"
#include "FortGameplayReceiverMessageComponent.h"

AFortCreativeTeleporter::AFortCreativeTeleporter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TeleporterAbility = NULL;
    this->Knob_TeleporterGroup = EFortCreativeTeleporterGroup::Group_A;
    this->Knob_TargetTeleporterGroup = EFortCreativeTeleporterGroup::Group_B;
    this->TeleportToWhenReceived = CreateDefaultSubobject<UFortGameplayReceiverMessageComponent>(TEXT("TeleportToWhenReceived"));
}

bool AFortCreativeTeleporter::IsTeleporterBlocked(const AActor* ActorToTeleport, const FRotator& InPawnTeleportedRotation) const {
    return false;
}

bool AFortCreativeTeleporter::IsPortalDebuggingEnabled() const {
    return false;
}

bool AFortCreativeTeleporter::IsLocationBlocked(const AActor* ActorToTeleport, FVector LocationToTeleport, const FRotator& InPawnTeleportedRotation) const {
    return false;
}


