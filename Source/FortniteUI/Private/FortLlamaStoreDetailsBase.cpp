#include "FortLlamaStoreDetailsBase.h"

UFortLlamaStoreDetailsBase::UFortLlamaStoreDetailsBase() {
    this->OfferInfo = NULL;
    this->ItemTileView = NULL;
}



void UFortLlamaStoreDetailsBase::SetScrollWidget() {
}


int32 UFortLlamaStoreDetailsBase::GetNotInCollectionBookCount() const {
    return 0;
}

int32 UFortLlamaStoreDetailsBase::GetNewItemCount() const {
    return 0;
}

int32 UFortLlamaStoreDetailsBase::GetChoiceItemCount() const {
    return 0;
}


