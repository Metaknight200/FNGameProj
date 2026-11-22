#include "KeepItemContainer.h"
#include "Net/UnrealNetwork.h"

AKeepItemContainer::AKeepItemContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bAlwaysShowContainer = true;
    this->HostUpgradeLevel = -1;
    this->ContainerType = EKeepContainerType::Max;
    this->bUseDefaultLootLogic = false;
    this->bResetThisWhenKeepResets = true;
    this->ContainerDataTable = NULL;
    this->bShowChoiceUI = false;
    this->BestAvailableRarity = EFortRarity::Common;
    this->MaxItems = 0;
}

void AKeepItemContainer::RestoreLoot() {
}

void AKeepItemContainer::ResetContainer(AFortPlayerController* FortPC) {
}

void AKeepItemContainer::OnRep_SearchedBy() {
}

void AKeepItemContainer::OnRep_HostUpgradeLevel() {
}

void AKeepItemContainer::InitializeContainer(int32 InitUpgradeLevel) {
}

int32 AKeepItemContainer::GetLootTierOverride_Implementation() const {
    return 0;
}

FName AKeepItemContainer::GetContainerNameAndLevelKey() {
    return NAME_None;
}

void AKeepItemContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AKeepItemContainer, HostUpgradeLevel);
    DOREPLIFETIME(AKeepItemContainer, SearchedBy);
    DOREPLIFETIME(AKeepItemContainer, BestAvailableRarity);
    DOREPLIFETIME(AKeepItemContainer, MaxItems);
}


