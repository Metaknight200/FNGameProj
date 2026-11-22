#include "FortRichTextBlockLegacy.h"

UFortRichTextBlockLegacy::UFortRichTextBlockLegacy() {
    this->StyleSet = NULL;
    this->WrapTextAt = 0.00f;
    this->AutoWrapText = false;
    this->Justification = ETextJustify::Left;
    this->DisableTouchInput = false;
    this->AllowContextMenu = true;
    this->KeybindWidgetClass = NULL;
}

void UFortRichTextBlockLegacy::SetText(FText InText) {
}

FString UFortRichTextBlockLegacy::EscapeStringForRichText(const FString& inString) {
    return TEXT("");
}


