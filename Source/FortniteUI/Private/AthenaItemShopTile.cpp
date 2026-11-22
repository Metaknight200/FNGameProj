#include "AthenaItemShopTile.h"

UAthenaItemShopTile::UAthenaItemShopTile() {
    this->ThumbnailRenderer = NULL;
    this->ThumbnailRendererClass = NULL;
    this->ItemCaptureActorClass = NULL;
    this->CaptureActorZOffset = 1000.00f;
    this->TimeBetweenPresentationSwaps = 3.00f;
    this->Text_Name = NULL;
    this->Text_Details = NULL;
    this->Text_Price = NULL;
    this->Text_PreviousPrice = NULL;
    this->Text_SubInfo = NULL;
    this->Overlay_SalePrice = NULL;
    this->Image_RarityStripe = NULL;
    this->Switcher_OwningStatus = NULL;
    this->TileState_Owned = NULL;
    this->TileState_NotOwned = NULL;
    this->TileState_SubInfo = NULL;
    this->Overlay_Violator = NULL;
    this->TagRotator_ItemTags = NULL;
    this->LoadGuard_Image = NULL;
    this->Image_Offer = NULL;
    this->Image_NextOffer = NULL;
    this->Image_AnimatedWrap = NULL;
    this->MaterialBacking_Rarity = NULL;
    this->MaterialBacking_NoRarity = NULL;
    this->ExternalSubscriptionTexture = NULL;
}

void UAthenaItemShopTile::ShowNextPresentation() {
}











bool UAthenaItemShopTile::IsUsingLargeLayout() const {
    return false;
}

void UAthenaItemShopTile::HandleLocalAccountInfoChanged(FFortPrivateAccountInfo NewInfo) {
}

UFortMtxOfferData* UAthenaItemShopTile::GetLegacyDisplayAsset() const {
    return NULL;
}


