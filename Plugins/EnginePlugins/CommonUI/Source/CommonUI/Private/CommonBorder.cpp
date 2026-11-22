#include "CommonBorder.h"
#include "Components/SlateWrapperTypes.h"
#include "Templates/SubclassOf.h"

UCommonBorder::UCommonBorder() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->Style = NULL;
    this->bReducePaddingBySafezone = false;
}

void UCommonBorder::SetStyle(TSubclassOf<UCommonBorderStyle> InStyle) {
}


