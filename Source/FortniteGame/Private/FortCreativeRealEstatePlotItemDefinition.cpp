#include "FortCreativeRealEstatePlotItemDefinition.h"
#include "EFortItemType.h"

UFortCreativeRealEstatePlotItemDefinition::UFortCreativeRealEstatePlotItemDefinition() {
    this->ItemType = EFortItemType::CreativePlot;
    this->GrantToProfileType = TEXT("creative");
    this->SizeX = 1;
    this->SizeY = 1;
    this->OffsetType = ERealEstateOffsetType::CustomOffsetFromCorner;
    this->SortIndex = 0;
    this->bIsAvailableToUsers = false;
    this->bCreativeHeatmapThermometerEnabled = false;
    this->CreativeHeatmapThermometerInfluenceDistanceMultiplier = 1.00f;
    this->CreativeHeatmapThermometerCellSizeMultiplier = 8;
}


