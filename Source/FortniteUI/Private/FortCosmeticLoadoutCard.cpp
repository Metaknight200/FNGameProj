#include "FortCosmeticLoadoutCard.h"

UFortCosmeticLoadoutCard::UFortCosmeticLoadoutCard() {
    this->CardType = EFortLoadoutCardType::Items;
    this->bSaved = true;
    this->WidthToHeightRatio = 1.62f;
    this->CardWidth = 128.00f;
    this->WipedownAnimation = NULL;
    this->SizeBox_Card = NULL;
}


void UFortCosmeticLoadoutCard::HandleDifferentHeroLoadoutActivated(const UFortMcpProfileCampaign* Profile) {
}

TSoftObjectPtr<UTexture2D> UFortCosmeticLoadoutCard::GetCharacterPreviewImage() {
    return NULL;
}


