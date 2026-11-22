#include "SocialGroupTreeView.h"

USocialGroupTreeView::USocialGroupTreeView() : Super(FObjectInitializer::Get()) {
    this->GroupEntryWidgetClass = NULL;
    this->UserEntryWidgetClass = NULL;
    this->ActionMenuClass = NULL;
    this->ActionMenu = NULL;
}


