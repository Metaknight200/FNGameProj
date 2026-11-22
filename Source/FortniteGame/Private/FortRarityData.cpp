#include "FortRarityData.h"

UFortRarityData::UFortRarityData() {
}

EFortRarity UFortRarityData::GetRarityCosmeticForItem(const UObject* WorldContextObject, const UFortItem* Item) {
    return EFortRarity::Common;
}

FFortRarityItemData UFortRarityData::BPGetRarityDataForItemDef(const UFortItemDefinition* ItemDef) {
    return FFortRarityItemData{};
}

FFortRarityItemData UFortRarityData::BPGetRarityData(EFortRarity Rarity) {
    return FFortRarityItemData{};
}

FFortColorPalette UFortRarityData::BPGetRarityColorPalette(EFortRarity Rarity) {
    return FFortColorPalette{};
}


