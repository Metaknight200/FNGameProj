#include "LiveStreamAnimationSubsystem.h"
#include "Templates/SubclassOf.h"

ULiveStreamAnimationSubsystem::ULiveStreamAnimationSubsystem() {
    this->bEnabled = false;
}

void ULiveStreamAnimationSubsystem::SetRole(const ELiveStreamAnimationRole NewRole) {
}

void ULiveStreamAnimationSubsystem::SetAcceptClientPackets_Private(bool bInShouldAcceptClientPackets) {
}

ELiveStreamAnimationRole ULiveStreamAnimationSubsystem::GetRole() const {
    return ELiveStreamAnimationRole::Proxy;
}

ULiveStreamAnimationDataHandler* ULiveStreamAnimationSubsystem::GetDataHandler(TSubclassOf<ULiveStreamAnimationDataHandler> Type) const {
    return NULL;
}


