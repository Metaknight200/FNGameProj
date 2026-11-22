#include "CommonLazyWidget.h"
#include "Components/SlateWrapperTypes.h"

UCommonLazyWidget::UCommonLazyWidget() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->Content = NULL;
}

void UCommonLazyWidget::SetLazyContent(const TSoftClassPtr<UUserWidget> SoftWidget) {
}

bool UCommonLazyWidget::IsLoading() const {
    return false;
}

UUserWidget* UCommonLazyWidget::GetContent() const {
    return Content;
}


