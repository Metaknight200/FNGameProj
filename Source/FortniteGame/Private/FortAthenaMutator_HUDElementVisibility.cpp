#include "FortAthenaMutator_HUDElementVisibility.h"
#include "EFortMutatorOverridePriority.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_HUDElementVisibility::AFortAthenaMutator_HUDElementVisibility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatesGameState = true;
    this->OverridePriority = EFortMutatorOverridePriority::Medium;
}

void AFortAthenaMutator_HUDElementVisibility::OnVolumePlaysetChanged(const UFortPlaysetItemDefinition* PlaysetItemDef) {
}

void AFortAthenaMutator_HUDElementVisibility::OnRep_HUDVisibiliyModifierChanged() {
}

void AFortAthenaMutator_HUDElementVisibility::OnMinigameSetUp(AFortMinigame* Minigame) {
}

void AFortAthenaMutator_HUDElementVisibility::OnCreativeLinkedVolumeChangedForPC(AFortVolume* Volume) {
}

void AFortAthenaMutator_HUDElementVisibility::OnClientPlayModeChanged(AFortMinigame* Minigame, bool bIsInPlayMode) {
}

void AFortAthenaMutator_HUDElementVisibility::OnClientEnteredVolume(APlayerState* Client, AFortVolume* Volume) {
}


void AFortAthenaMutator_HUDElementVisibility::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_HUDElementVisibility, HUDElementVisbilityData);
}


