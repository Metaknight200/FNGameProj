#include "BuildingItemWeaponUpgradeActor.h"
#include "EFortItemCollectorBehavior.h"
#include "EFortItemCollectorTrackingType.h"
#include "Net/UnrealNetwork.h"

ABuildingItemWeaponUpgradeActor::ABuildingItemWeaponUpgradeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowSecondInteractPrompt = true;
    this->ItemCollectorBehavior = EFortItemCollectorBehavior::FreeForAll;
    this->bIncrementCaptureCountWhenGoalIsReached = false;
    this->TrackingType = EFortItemCollectorTrackingType::Player;
    this->bCallOnLocalInteract = true;
    this->bAllowSecondInteraction = true;
    this->WoodItem = NULL;
    this->MetalItem = NULL;
    this->BrickItem = NULL;
    this->UpgradeInteractionResult = EFortWeaponUpgradeInteractionResult::Upgradable;
    this->HorizontalUpgradeInteractionResult = EFortWeaponUpgradeInteractionResult::Upgradable;
    this->RequiredResources = NULL;
    this->RequiredHorizontalResources = NULL;
    this->CurrentWeaponDefinition = NULL;
    this->UpgradedWeaponRarity = EFortRarity::Common;
    this->BuildingAttachmentType = ATTACH_None;
    this->bBlocksAttachmentPlacement = true;
    this->BuildingActorAttachedTo = NULL;
}

void ABuildingItemWeaponUpgradeActor::OnRep_AllowSecondInteraction() {
}

void ABuildingItemWeaponUpgradeActor::FloorDestroyed(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}


void ABuildingItemWeaponUpgradeActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingItemWeaponUpgradeActor, bAllowSecondInteraction);
}


