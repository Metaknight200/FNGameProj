#include "CommonLoadGuard.h"
#include "Components/SlateWrapperTypes.h"

UCommonLoadGuard::UCommonLoadGuard() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->ThrobberAlignment = HAlign_Center;
    this->TextStyle = NULL;
}

void UCommonLoadGuard::SetLoadingText(const FText& InLoadingText) {
}

void UCommonLoadGuard::SetIsLoading(bool bInIsLoading) {
}

bool UCommonLoadGuard::IsLoading() const {
    return false;
}

void UCommonLoadGuard::BP_GuardAndLoadAsset(const TSoftObjectPtr<UObject>& InLazyAsset, const UCommonLoadGuard::FOnAssetLoaded& OnAssetLoaded) {
}


