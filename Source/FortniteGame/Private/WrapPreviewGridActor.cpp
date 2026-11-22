#include "WrapPreviewGridActor.h"

AWrapPreviewGridActor::AWrapPreviewGridActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WrapToApply = NULL;
    this->MaterialTypeForRawMeshes = EItemWrapMaterialType::VehicleWrap_Opaque;
    this->WidthInItems = 20;
    this->bScanForWeapons = false;
    this->bShowRangedWeapons = true;
    this->bShowMeleeWeapons = false;
    this->bExcludePrototypeRangedWeapons = false;
    this->bFilterOutRarityDupesForRangedWeapons = true;
    this->bFilterOutTierDupesForWeapons = false;
    this->bFilterOutCraftingMaterialDupesForWeapons = false;
    this->LockerFilterMode = EWrapPreviewGridLockerMode::IgnoreLockerConfiguration;
    this->bShowOnlyItemsThatDontHaveWrapLockerSlot = false;
    this->bShowWrapMatchIcon = true;
    this->bHasSectionLimit = false;
    this->MaterialSectionMask = 1;
    this->FailedToMatchLockerMarker = NULL;
    this->StatusIconSize = 0.00f;
    this->bStatusIconScreenSizeScaled = true;
}

void AWrapPreviewGridActor::SetWrap(UAthenaItemWrapDefinition* NewWrap) {
}

TArray<FName> AWrapPreviewGridActor::GetMeshComponentNames() {
    return TArray<FName>();
}


