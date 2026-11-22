#include "FortActivityBrowserTag.h"

UFortActivityBrowserTag::UFortActivityBrowserTag() : UUserWidget(FObjectInitializer::Get()) {
    this->Text_TagDescription = NULL;
}


EFortActivityBrowserTagType UFortActivityBrowserTag::GetTagType() const {
    return EFortActivityBrowserTagType::Default;
}


