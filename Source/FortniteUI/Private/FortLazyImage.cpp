#include "FortLazyImage.h"
#include "Components/SlateWrapperTypes.h"

UFortLazyImage::UFortLazyImage() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->bApplyDropShadow = false;
}

void UFortLazyImage::SetShadowColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UFortLazyImage::SetFortBrushSize(TEnumAsByte<EFortBrushSize::Type> FortBrushSize) {
}

void UFortLazyImage::SetBrushFromURL(const FString& CMSImageURL) {
}

void UFortLazyImage::SetBrushFromItemInstance(const UFortItem* ItemInstance) {
}

void UFortLazyImage::SetBrushFromItemDefinition(const UFortItemDefinition* ItemDefinition) {
}


