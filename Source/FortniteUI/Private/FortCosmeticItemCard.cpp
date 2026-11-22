#include "FortCosmeticItemCard.h"

UFortCosmeticItemCard::UFortCosmeticItemCard() {
    this->bIsReward = false;
    this->bIsItemIconEnabled = true;
    this->bIsDetailIconEnabled = true;
    this->bIsQuantityEnabled = true;
    this->WidthToHeightRatio = 1.62f;
    this->RewardWidthToHeightRatio = 1.62f;
    this->CardWidth = 128.00f;
    this->RewardCardWidth = 128.00f;
    this->DefaultItemCardMaterial = NULL;
    this->MinWidgetWidthForLargeAsset = 128.00f;
    this->MinWidgetWidthForLargeAssetMobile = 160.00f;
    this->SizeBox_NewItemCard = NULL;
    this->Image_NewItemCard = NULL;
    this->LoadGuard = NULL;
    this->ItemToRepresent = NULL;
}


void UFortCosmeticItemCard::SetItemToRepresent(const UFortItem* InItemToRepresent) {
}











