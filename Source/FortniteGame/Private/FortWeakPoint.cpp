#include "FortWeakPoint.h"
#include "Net/UnrealNetwork.h"

AFortWeakPoint::AFortWeakPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CachedWeakPointCoordinator = NULL;
    this->WeakPointState = EFortWeakPointState::Uninitialized;
    this->bShouldDisplayHealthBarWhenActive = false;
    this->bShouldRegisterForAimAssist = true;
}


void AFortWeakPoint::OnRep_WeakPointState() {
}

EFortWeakPointState AFortWeakPoint::GetWeakPointState() const {
    return EFortWeakPointState::Uninitialized;
}

FName AFortWeakPoint::GetWeakPointAttachmentSocketName() const {
    return WeakPointAttachmentSocketName;
}

UShapeComponent* AFortWeakPoint::GetAimAssistTargetComponent_Implementation() {
    return NULL;
}

void AFortWeakPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeakPoint, WeakPointState);
    DOREPLIFETIME(AFortWeakPoint, WeakPointAttachmentSocketName);
}


